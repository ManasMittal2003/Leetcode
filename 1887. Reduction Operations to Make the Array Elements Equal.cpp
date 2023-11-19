class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int cnt=0;
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=nums[i+1]){
                cnt=cnt+(n-i);
            }
        }
        return cnt;
    }
};

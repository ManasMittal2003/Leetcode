class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target=nums.size()/2;
        int i=0;
        int sum=1;
        if(nums.size()==1){
            return nums[0];
        }
        while(i<(nums.size()-1)){
            if(nums[i]==nums[i+1]){
                sum++;
                if(sum>target){
                    return nums[i];
                }
            }
            else{
                sum=1;
            }
            i++;
        }
        return 0;
    }
};

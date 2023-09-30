class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int low=0,mid=n;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                ans.push_back(nums[low]);
                low++;
            }else{
                ans.push_back(nums[mid]);
                mid++;
            }
        }
        return ans;
    }
};

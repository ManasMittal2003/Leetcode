class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int a1=0,a2=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[a2]=nums[i];
                a2=a2+2;
            }
            else{
                ans[a1]=nums[i];
                a1=a1+2;
            }
        }
        return ans;
    }
};

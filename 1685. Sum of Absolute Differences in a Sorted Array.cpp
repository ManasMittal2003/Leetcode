class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        for(auto i:nums){
            sum+=i;
        }
        int n=nums.size();
        int lsum=0;
        int lnum=0;
        for(int i=0;i<nums.size();i++){
            int rsum=sum-nums[i]-lsum;
            int rnum=n-lnum-1;
            ans.push_back((lnum*nums[i]-lsum)+(rsum-rnum*nums[i]));
            lnum++;
            lsum+=nums[i];
        }
        return ans;
    }
};

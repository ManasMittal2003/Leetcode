class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long lsum=0;
        vector<long long> sums(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            lsum=lsum+nums[i];
            sums[i]=lsum;
        }
        for(int j=nums.size()-2;j>=0;j--){
            if((sums[j]>nums[j+1])&&(j>=1)){
                return sums[j+1];
            }
        }
        return -1;
    }
};

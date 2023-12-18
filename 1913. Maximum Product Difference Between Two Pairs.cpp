class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int m1=nums[n]*nums[n-1];
        int m2=nums[0]*nums[1];
        return m1-m2;
    }
};

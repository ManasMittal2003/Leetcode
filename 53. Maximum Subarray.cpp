class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,sum1=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1=sum1+nums[i];
            if(sum<sum1)
            {
                sum=sum1;
            }
            if(sum1<0)
            {
                sum1=0;
            }
        }
        return sum;
    }
};

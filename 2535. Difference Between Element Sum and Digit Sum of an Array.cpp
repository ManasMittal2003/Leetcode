class Solution {
public:
    int elementsum(vector<int> nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        return sum;
    }
    int digitsum(vector<int> nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=nums[i];j>0;j=j/10){
                sum=sum+(j%10);
            }
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int a=elementsum(nums);
        int b=digitsum(nums);
        return abs(a-b);
    }
};

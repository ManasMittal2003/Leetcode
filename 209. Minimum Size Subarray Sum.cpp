class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlength=INT_MAX;
        int i=0,j=0;
        int sum=0;
        while(j<nums.size()){
            sum=sum+nums[j];
            while(sum>=target){
                minlength=min(minlength,j-i+1);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        if(minlength==INT_MAX) return 0;
        return minlength;
    }
};

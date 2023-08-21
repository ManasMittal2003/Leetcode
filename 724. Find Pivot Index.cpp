class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum1=0,sum2=0,i=0;
        for(int i=0;i<nums.size();i++){
            sum2=sum2+nums[i];
        }
        sum2=sum2-nums[0];
        while(i<nums.size()){
            if(sum1==sum2){
                return i;
            }
            sum1=sum1+nums[i];
            i++;
            if(i<nums.size()){
                sum2=sum2-nums[i];
            }
        }
        return -1;
    }
};

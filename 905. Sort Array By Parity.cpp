class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int slow=0,fast=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if((nums[i]%2)!=0){
                slow=i;
                break;
            }
        }
        fast=slow+1;
        while(fast<n){
            if((nums[fast]%2)==0){
                swap(nums[slow],nums[fast]);
                slow++;
                fast++;
            }else{
                fast++;
            }
        }
        return nums;
    }
};

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;
        if(nums.size()==1){
            return true;
        }
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                break;
            }
        }
        if(i==nums.size()-1){
            return true;
        }
        if(nums[i]>nums[i+1]){
            for(int j=i;j<nums.size()-1;j++){
                if(nums[j]<nums[j+1]){
                    return false;
                }
            }
        }else{
            for(int j=i;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    return false;
                }
            }
        }
        return true;
    }
};

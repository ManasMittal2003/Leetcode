class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]%2==0&&nums[j]%2==0||nums[i]%2!=0&&nums[j]%2!=0){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};

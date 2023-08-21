class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int low=0,high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<high){
            if(nums[mid]>=nums[0]){
                low=mid+1;
            }else{
                high=mid;
            }
            mid=low+(high-low)/2;
        }
        if(nums[low]>nums[low-1]){
            return nums[0];
        }
        return nums[low];
    }
};

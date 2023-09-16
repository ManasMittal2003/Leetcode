class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,high=nums.size()-1;
        int mid=l+(high-l)/2;
        while(l<high){
            if(nums[mid+1]>nums[mid]){
                l=mid+1;
            }else{
                high=mid;
            }
            mid=l+(high-l)/2;
        }
        return high;
    }
};

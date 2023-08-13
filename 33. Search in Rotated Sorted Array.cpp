class Solution {
public:
int searchtarget(vector<int>& nums, int target,int s){
    if(target>=nums[s]&&(target<=nums[nums.size()-1])){
        int low=s,high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return -1;
    }
    else{
        int low=0,high=s-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return -1;
    }
}
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        if(nums.size()==1&&nums[0]==target){
            return 0;
        }
        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return searchtarget(nums,target,s);
    }
};

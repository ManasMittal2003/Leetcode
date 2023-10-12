/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak;
        int ans=-1;
        int low=0,high=mountainArr.length()-1;
        int mid=low+(high-low)/2;
        while(low<high){
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                low=mid+1;
            }
            else{
                high=mid;
            }
            mid=low+(high-low)/2;
        }
        peak=high;
        low=0;
        high=peak;
        mid=low+(high-low)/2;
        while(low<=high){
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        low=peak;
        high=mountainArr.length()-1;
        mid=low+(high-low)/2;
        while(low<=high){
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)>target){
                low=mid+1;
            }else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return -1;
    }
};

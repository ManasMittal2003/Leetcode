class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        int low=0;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            low=i;
            int mid=low+1;
            int high=nums.size()-1;
            while(mid<high){
                if(nums[mid]-nums[low]==diff){
                    int diff2=nums[high]-nums[mid];
                    if(diff2==diff){
                        count++;
                    }
                    high--;
                }
                else{
                    mid++;
                }
            }
        }
        return count;
    }
};

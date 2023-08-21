class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int temp=nums[nums.size()/2];
        int j=0,k=nums.size()/2,a=1,s;
        while(j<(nums.size()/2)-1){
            for(s=k;s>a;s--){
                nums[s]=nums[s-1];
            }
            nums[s]=temp;
            j++;
            k++;
            temp=nums[k];
            a=a+2;
        }
        return nums;
   }
};

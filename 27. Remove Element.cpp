class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        int i=-1,j;
        for(int k=0;k<nums.size();k++){
            if(nums[k]==val){
                i=k;
                break;
            }
        }
        if(i==-1){
            return nums.size();
        }
        for(int k=i;k<nums.size()-1;k++){
            if(nums[k]!=nums[k+1]){
                j=k;
                break;
            }
        }
        nums.erase(nums.begin()+i,nums.begin()+j+1);
        return nums.size();
    }
};

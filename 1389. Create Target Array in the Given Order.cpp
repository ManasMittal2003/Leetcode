class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size(),101);
        int i=0,j=0,k;
        while(i<nums.size()){
            if(target[index[j]]==101){
                target[index[j]]=nums[i];
                i++;
                j++;
            }
            else{
                for(k=i-1;k>=index[j];k--){
                    target[k+1]=target[k];
                }
                target[k+1]=nums[i];
                i++;
                j++;
            }
        } 
        return target;  
    }
};

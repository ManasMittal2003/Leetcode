class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==1&&nums[0]==1){
            return 1;
        }
        int maximum=INT_MIN;
        int i,j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                j=i;
                break;
            }
        }
        if(j==-1){
            return 0;
        }
        i=j;
        while(i<nums.size()){
            if(nums[i]==0){
                i++;
                j=i;
            }
            else{
                maximum=max(maximum,i-j+1);
                i++;
            }
        }
        return maximum;
    }
};

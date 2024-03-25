class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int num=abs(nums[i]);
            num-=1;
            if(nums[num]<0){
                ans.push_back(num+1);
            }else{
                nums[num]=-nums[num];
            }
        }
        return ans;
    }
};

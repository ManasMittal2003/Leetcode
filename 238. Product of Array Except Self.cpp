class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lpro(nums.size(),-1);
        int pro=1;
        for(int i=0;i<nums.size();i++){
            lpro[i]=pro;
            pro=pro*nums[i];
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            lpro[i]=lpro[i]*pro;
            pro=pro*nums[i];
        }
        return lpro;
    }
};

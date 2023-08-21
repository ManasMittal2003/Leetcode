class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res(2*nums.size());
        int a=0;
        for(int i=0;i<nums.size();i++){
            res[i]=nums[i];
        }
        for(int j=nums.size();j<2*nums.size();j++){
            res[j]=nums[a];
            a++;
        }
        return res;
    }
};

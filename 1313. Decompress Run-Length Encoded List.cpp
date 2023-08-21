class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i=0,j=1;
        vector<int> ans;
        while(j<nums.size()&&i<nums.size()){
            for(int k=0;k<nums[i];k++){
                ans.push_back(nums[j]);
            }
            i=i+2;
            j=j+2;
        }
        return ans;
    }
};

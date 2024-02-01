class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=3){
            if(abs(nums[i+2]-nums[i])>k){
                return {};
            }
            vector<int> temp={nums[i],nums[i+1],nums[i+2]};
            ans.push_back(temp);
        }
        return ans;
    }
};

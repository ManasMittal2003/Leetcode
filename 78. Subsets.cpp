class Solution {
public:
    void sub(int ind,vector<int> nums,vector<vector<int>> &ans,vector<int> &temp){
        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        sub(ind+1,nums,ans,temp);
        temp.pop_back();
        sub(ind+1,nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sub(0,nums,ans,temp);
        return ans;
    }
};

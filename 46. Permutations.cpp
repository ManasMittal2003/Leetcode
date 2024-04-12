class Solution {
public:
    void solve(int ind,vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp){
        if(ind>=nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(find(temp.begin(),temp.end(),nums[i])==temp.end()){
                temp.push_back(nums[i]);
                solve(ind+1,nums,ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,nums,ans,temp);
        return ans;
    }
};

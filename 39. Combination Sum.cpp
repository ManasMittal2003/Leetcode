class Solution {
public:
    void find(int ind,vector<int> candidates,int target,vector<vector<int>> &ans,vector<int> &temp){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            find(ind,candidates,target-candidates[ind],ans,temp);
            temp.pop_back();
        }
        find(ind+1,candidates,target,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        find(0,candidates,target,ans,temp);
        return ans;
    }
};

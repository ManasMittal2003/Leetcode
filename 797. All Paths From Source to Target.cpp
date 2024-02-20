class Solution {
public:
    void solve(int strt,vector<vector<int>> &ans,vector<int> temp,int &n,vector<vector<int>>& graph){
        if(strt==n){
            temp.push_back(strt);
            ans.push_back(temp);
            return;
        }
        temp.push_back(strt);
        for(auto i:graph[strt]){
            solve(i,ans,temp,n,graph);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size()-1;
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,ans,temp,n,graph);
        return ans;
    }
};

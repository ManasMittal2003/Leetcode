class Solution {
public:
    bool dfs(int strt,vector<vector<int>>& graph,vector<bool> &vis,vector<int> &path){
        vis[strt]=true;
        path[strt]=1;
        for(auto i:graph[strt]){
            if(vis[i]==false){
                bool ans=dfs(i,graph,vis,path);
                if(ans) return true;
            }else if(path[i]==1){
                return true;
            }
        }
        path[strt]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<bool> vis(v,false);
        vector<int> path(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==false){
                bool ans=dfs(i,graph,vis,path);
            }
        }
        vector<int> ans;
        for(int i=0;i<v;i++){
            if(path[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

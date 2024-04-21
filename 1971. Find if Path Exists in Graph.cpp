class Solution {
public:
    bool dfs(int source,int &destination,unordered_map<int,vector<int>> &graph,vector<bool> &vis){
        vis[source]=true;
        if(source==destination){
            return true;
        }
        for(auto i:graph[source]){
            if(vis[i]==false){
                bool ans=dfs(i,destination,graph,vis);
                if(ans==true){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph;
        vector<bool> vis(n,false);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        return dfs(source,destination,graph,vis);
    }
};

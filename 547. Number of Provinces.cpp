class Solution {
public:
    void dfs(unordered_map<int,vector<int>> &graph,int strt,vector<bool> &visited){
        visited[strt]=true;
        for(auto i:graph[strt]){
            if(visited[i]==false){
                dfs(graph,i,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        unordered_map<int,vector<int>> graph;
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[0].size();j++){
                if(adj[i][j]==1){
                    graph[i+1].push_back(j+1);
                    graph[j+1].push_back(i+1);
                }
            }
        }
        int v=adj.size();
        vector<bool> visited(v+1,false);
        int numpro=0;
        for(int i=1;i<=v;i++){
            if(visited[i]==false){
                numpro++;
                dfs(graph,i,visited);
            }
        }
        return numpro;
    }
};

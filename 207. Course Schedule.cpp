class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        unordered_map<int,vector<int>> graph;
        for(int i=0;i<pre.size();i++){
            graph[pre[i][1]].push_back(pre[i][0]);
        }
        vector<int> topo;
        queue<int> q;
        vector<int> ind(n,0);
        for(auto i:graph){
            for(auto j:i.second){
                ind[j]++;
            }
        }
        for(int i=0;i<n;i++){
            if(ind[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto i:graph[node]){
                ind[i]--;
                if(ind[i]==0){
                    q.push(i);
                }
            }
        }
        if(topo.size()==n){
            return true;
        }
        return false;
    }
};

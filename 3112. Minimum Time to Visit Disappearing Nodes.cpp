class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges,
                            vector<int>& dis) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for (int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            graph[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }
        vector<int> d(n, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            q;
        d[0] = 0;
        q.push({0, 0});
        while (!q.empty()) {
            int node = q.top().second;
            int dist = q.top().first;
            q.pop();
            if (d[node] < dist)
                continue;
            for (auto i : graph[node]) {
                if (dist + i.second < d[i.first] &&
                    dist + i.second < dis[i.first]) {
                    d[i.first] = dist + i.second;
                    q.push({dist + i.second, i.first});
                }
            }
        }
        for (int i = 1; i < n; i++) {
            if (d[i] == INT_MAX) {
                d[i] = -1;
            }
        }
        return d;
    }
};

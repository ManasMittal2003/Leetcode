class Solution {
public:
    void bfs(int row, int col, vector<vector<int>>& land, vector<int>& temp,
             vector<vector<bool>>& vis) {
        int n = land.size();
        int m = land[0].size();
        queue<pair<int, int>> q;
        vis[row][col] = true;
        q.push({row, col});
        int drow[4] = {0, -1, 0, 1};
        int dcol[4] = {-1, 0, 1, 0};
        int r, c;
        while (!q.empty()) {
            r = q.front().first;
            c = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = drow[i] + r;
                int ncol = dcol[i] + c;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    land[nrow][ncol] == 1 && vis[nrow][ncol] == false) {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = true;
                }
            }
        }
        temp.push_back(r);
        temp.push_back(c);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size();
        int m = land[0].size();
        vector<vector<int>> ans;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (land[i][j] == 1 && vis[i][j] == false) {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    bfs(i, j, land, temp, vis);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};

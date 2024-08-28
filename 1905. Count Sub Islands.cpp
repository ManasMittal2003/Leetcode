class Solution {
public:
    int drow[4] = {0, -1, 0, 1};
    int dcol[4] = {-1, 0, 1, 0};
    void dfs(int row, int col, int& n, int& m, vector<vector<int>>& grid1,
             vector<vector<int>>& grid2, vector<vector<bool>>& vis,
             bool& flag) {
        vis[row][col] = true;
        if (grid1[row][col] != 1) {
            flag = false;
        }
        for (int i = 0; i < 4; i++) {
            int nr = row + drow[i];
            int nc = col + dcol[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid2[nr][nc] == 1 &&
                vis[nr][nc] == false) {
                dfs(nr, nc, n, m, grid1, grid2, vis, flag);
            }
        }
    }
    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        int n = grid2.size();
        int m = grid2[0].size();
        int ans = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid2[i][j] == 1 && vis[i][j] == false) {
                    bool flag = true;
                    dfs(i, j, n, m, grid1, grid2, vis, flag);
                    if (flag == true) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

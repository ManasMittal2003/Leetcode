class Solution {
public:
    int solve(vector<vector<int>>& grid, int row, int col,
              vector<vector<bool>>& vis) {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = true;
        int dr[4] = {0, -1, 0, 1};
        int dc[4] = {-1, 0, 1, 0};
        int maxans = grid[row][col];
        for (int i = 0; i < 4; i++) {
            int nr = row + dr[i];
            int nc = col + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] != 0 &&
                vis[nr][nc] == false) {
                int res = grid[row][col] + solve(grid, nr, nc, vis);
                maxans = max(maxans, res);
            }
        }
        vis[row][col]=false;
        return maxans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) {
                    vector<vector<bool>> vis(n, vector<bool>(m, false));
                    int ans = solve(grid, i, j, vis);
                    maxans = max(ans, maxans);
                }
            }
        }
        return maxans;
    }
};

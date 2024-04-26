class Solution {
public:
    int solve(int row, int col, vector<vector<int>>& grid,
              vector<vector<int>>& dp) {
        if (row == grid.size() - 1) {
            return grid[row][col];
        }
        if (dp[row][col] != -1) {
            return dp[row][col];
        }
        int n = grid.size();
        int m = grid[0].size();
        int minans = 1e6;
        for (int i = 0; i < m; i++) {
            if (i != col) {
                int res = grid[row][col] + solve(row + 1, i, grid, dp);
                minans = min(res, minans);
            }
        }
        return dp[row][col] = minans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = INT_MAX;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        for (int i = 0; i < grid[0].size(); i++) {
            int res = solve(0, i, grid, dp);
            ans = min(res, ans);
        }
        return ans;
    }
};

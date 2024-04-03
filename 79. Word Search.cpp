class Solution {
public:
    int drow[4] = {0, -1, 0, 1};
    int dcol[4] = {-1, 0, 1, 0};
    bool solve(int row, int col, int idx, vector<vector<char>>& grid,
               vector<vector<bool>>& vis, string& word) {
        int n = grid.size();
        int m = grid[0].size();
        if (idx == word.length() - 1) {
            return true;
        }
        vis[row][col] = true;
        for (int i = 0; i < 4; i++) {
            int nrow = drow[i] + row;
            int ncol = dcol[i] + col;
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                vis[nrow][ncol] == false && grid[nrow][ncol] == word[idx + 1]) {
                bool ans = solve(nrow, ncol, idx + 1, grid, vis, word);
                if (ans)
                    return true;
            }
        }
        vis[row][col] = false;
        return false;
    }
    bool exist(vector<vector<char>>& grid, string word) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == word[0]) {
                    bool ans = solve(i, j, 0, grid, vis, word);
                    if (ans)
                        return true;
                }
            }
        }
        return false;
    }
};

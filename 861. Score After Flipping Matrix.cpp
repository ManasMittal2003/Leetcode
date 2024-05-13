class Solution {
public:
    void row(vector<vector<int>>& grid, int& r, int& n, int& m) {
        for (int j = 0; j < m; j++) {
            if (grid[r][j] == 0) {
                grid[r][j] = 1;
            } else {
                grid[r][j] = 0;
            }
        }
    }
    void col(vector<vector<int>>& grid, int& c, int& n, int& m,
             vector<int>& colones) {
        int ones = 0;
        for (int j = 0; j < n; j++) {
            if (grid[j][c] == 0) {
                ones++;
            }
        }
        if (ones > colones[c]) {
            for (int j = 0; j < n; j++) {
                if (grid[j][c] == 0) {
                    grid[j][c] = 1;
                } else {
                    grid[j][c] = 0;
                }
            }
        }
    }
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 0) {
                row(grid, i, n, m);
            }
        }
        vector<int> colones(m, 0);
        for (int j = 0; j < m; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += grid[i][j];
            }
            colones[j] = sum;
        }
        for (int i = 1; i < m; i++) {
            col(grid, i, n, m, colones);
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int k = 1;
            for (int j = m - 1; j >= 0; j--) {
                if (grid[i][j] == 1) {
                    sum = sum + k;
                }
                k = k * 2;
            }
        }
        return sum;
    }
};

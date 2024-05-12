class Solution {
public:
    int findmax(vector<vector<int>>& grid, int row, int col) {
        int maxi = INT_MIN;
        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                maxi = max(maxi, grid[i][j]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            if (i + 2 >= n) {
                break;
            }
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                if (i + 2 < n && j + 2 < m) {
                    int val = findmax(grid, i, j);
                    temp.push_back(val);
                } else {
                    break;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

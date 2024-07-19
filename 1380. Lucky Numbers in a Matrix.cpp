class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        vector<int> rowmin(n, INT_MAX);
        vector<int> colmax(m, INT_MIN);
        unordered_map<int, bool> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                rowmin[i] = min(rowmin[i], matrix[i][j]);
                colmax[j] = max(colmax[j], matrix[i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            int temp = rowmin[i];
            for (int j = 0; j < m; j++) {
                if (mp[j] == true) {
                    continue;
                }
                if (colmax[j] == temp) {
                    mp[j] = true;
                    ans.push_back(colmax[j]);
                }
            }
        }
        return ans;
    }
};

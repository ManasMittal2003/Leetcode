class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int res = INT_MIN;
        int mini = arrays[0][0];
        int n = arrays[0].size();
        int maxi = arrays[0][n - 1];
        for (int i = 1; i < arrays.size(); i++) {
            int size = arrays[i].size();
            res = max(res, max(abs(arrays[i][0] - maxi),
                               abs(arrays[i][size - 1] - mini)));
            mini = min(mini, arrays[i][0]);
            maxi = max(maxi, arrays[i][size - 1]);
        }
        return res;
    }
};

class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int d = 0, b = 1;
        int n = possible.size();
        int tsum = 0;
        for (int i = 0; i < possible.size(); i++) {
            if (possible[i] == 0) {
                possible[i] = -1;
            }
            tsum += possible[i];
        }
        int sum = 0;
        while (b < n) {
            sum += possible[d];
            if (sum > tsum - sum) {
                return d + 1;
            }
            d++;
            b++;
        }
        return -1;
    }
};

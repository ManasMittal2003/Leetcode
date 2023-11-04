class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxLeft = 0;
        int maxRight = 0;
        for (int pos : left) {
            maxLeft = max(maxLeft, pos);
        }

        for (int pos : right) {
            maxRight = max(maxRight, n - pos);
        }

        return max(maxLeft, maxRight);
    }
};

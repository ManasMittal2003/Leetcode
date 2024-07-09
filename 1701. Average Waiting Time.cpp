class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans = 0;
        double start = customers[0][0];
        for (int i = 0; i < customers.size(); i++) {
            if (start < customers[i][0]) {
                start = customers[i][0];
            }
            start += customers[i][1];
            ans += start - customers[i][0];
        }
        return ans / customers.size();
    }
};

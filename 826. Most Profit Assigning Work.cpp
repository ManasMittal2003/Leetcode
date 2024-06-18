class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();

        vector<pair<int, int>> diff_profit(n);
        for (int i = 0; i < n; i++) {
            diff_profit[i] = {difficulty[i], profit[i]};
        }

        sort(diff_profit.begin(), diff_profit.end());

        sort(worker.begin(), worker.end());

        int i = 0;
        int j = 0;
        int maxProfit = 0, ans = 0;

        while (i < n && j < m) {

            if (diff_profit[i].first <= worker[j]) {

                maxProfit = max(maxProfit, diff_profit[i].second);
                i++;
            } else {

                ans += maxProfit;
                j++;
            }
        }

        while (j < m) {
            ans += maxProfit;
            j++;
        }

        return ans;
    }
};

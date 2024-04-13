class Solution {
    int n;
    int dp[13][10001];
    int getMinCoins(int i, vector<int>& coins, int amount) {
        if(i == n) {
            return INT_MAX - 1;
        }
        if(amount < 0) {
            return INT_MAX - 1;
        }
        if(amount == 0) {
            return 0;
        }

        if(dp[i][amount] != -1) {
            return dp[i][amount];
        }

        int take = 1 + getMinCoins(i, coins, amount - coins[i]);
        int skip = getMinCoins(i + 1, coins, amount);

        return dp[i][amount] = min(take, skip);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        memset(dp, -1, sizeof dp);

        int result = getMinCoins(0, coins, amount);
        if(result == INT_MAX - 1) {
            return -1;
        }

        return result;
    }
};

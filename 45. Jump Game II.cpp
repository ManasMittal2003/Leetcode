class Solution {
public:
    int solve(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind == nums.size() - 1) {
            return dp[ind] = 0;
        }
        if (ind >= nums.size()) {
            return 10001;
        }
        if (nums[ind] == 0) {
            return dp[ind] = 10001;
        }
        if (dp[ind] != -1) {
            return dp[ind];
        }
        int minjump = 10001;
        for (int i = 1; i <= nums[ind]; i++) {
            minjump = min(minjump, 1 + solve(ind + i, nums, dp));
        }
        return dp[ind] = minjump;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }
};

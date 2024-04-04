class Solution {
public:
    bool solve(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind == nums.size() - 1) {
            return true;
        }
        if (ind >= nums.size()) {
            return false;
        }
        if (dp[ind] != -1) {
            return dp[ind];
        }
        for (int i = 1; i <= nums[ind]; i++) {
            bool ans = solve(ind + i, nums, dp);
            if (ans)
                return dp[ind] = true;
        }
        return dp[ind] = false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }
};

class Solution {
public:
    void solve(int idx, std::vector<int>& nums, int k, std::vector<int>& temp,
               int& ans) {
        if (idx >= nums.size()) {
            if (!temp.empty()) {
                ans++;
            }
            return;
        }
        bool add = true;
        for (int t : temp) {
            if (abs(t - nums[idx]) == k) {
                add = false;
                break;
            }
        }
        if (add) {
            temp.push_back(nums[idx]);
            solve(idx + 1, nums, k, temp, ans);
            temp.pop_back();
        }
        solve(idx + 1, nums, k, temp, ans);
    }
    int beautifulSubsets(std::vector<int>& nums, int k) {
        int ans = 0;
        vector<int> temp;
        solve(0, nums, k, temp, ans);
        return ans;
    }
};

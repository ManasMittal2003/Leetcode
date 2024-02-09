// class Solution {
// public:
//     void solve(int ind,vector<int> &nums,vector<int> &temp,vector<int> &ans){
//         if(ind>=nums.size()){
//             if(temp.size()>ans.size()){
//                 ans=temp;
//             }
//             return;
//         }
//         if(temp.empty()||(nums[ind]%temp.back())==0){
//             temp.push_back(nums[ind]);
//             solve(ind+1,nums,temp,ans);
//             temp.pop_back();
//         }
//         solve(ind+1,nums,temp,ans);
//     }
//     vector<int> largestDivisibleSubset(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> ans;
//         vector<int> temp;
//         solve(0,nums,temp,ans);
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        int mx = -1;
        if (nums.size() == 1)
            return nums;
        std::vector<int> dp(n, 1), build(n, -1), ans;

        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if ((nums[i] % nums[j] == 0) and
                    dp[j] + (nums[i] % nums[j] == 0) > dp[i]) {
                    dp[i] = max(dp[i], dp[j] + (nums[i] % nums[j] == 0));
                    build[i] = j;
                    mx = max(mx, dp[i]);
                }
            }
        }

        if (mx == -1)
            return {nums[0]};

        for (int i = n - 1; i >= 0; i--) {
            if (dp[i] == mx) {
                ans.push_back(nums[i]);
                for (int j = build[i]; j >= 0; j = build[j]) {
                    ans.push_back(nums[j]);
                }
                break;
            }
        }
        return ans;
    }
};

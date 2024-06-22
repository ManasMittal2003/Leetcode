class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cnt = 0;
        mp[0] = 1;
        int oddcnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                oddcnt++;
            }
            int idx = oddcnt - k;
            if (mp.find(idx) != mp.end()) {
                cnt += mp[idx];
            }
            mp[oddcnt]++;
        }
        return cnt;
    }
};

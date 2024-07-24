class Solution {
public:
    static bool cmp(pair<long long, int> a, pair<long long, int> b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<long long, int>> store;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            int j = 1;
            long long newnum = mapping[val % 10];
            val = val / 10;
            while (val) {
                newnum = (mapping[val % 10] * pow(10, j)) + newnum;
                val = val / 10;
                j++;
            }
            store.push_back({newnum, i});
        }
        sort(store.begin(), store.end(), cmp);
        for (auto i : store) {
            ans.push_back(nums[i.second]);
        }
        return ans;
    }
};

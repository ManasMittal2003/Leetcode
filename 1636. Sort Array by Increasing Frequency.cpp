class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int, int>> store;
        unordered_map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        for (auto i : mp) {
            store.push_back({i.first, i.second});
        }
        sort(store.begin(), store.end(), cmp);
        vector<int> ans;
        for (int i = 0; i < store.size(); i++) {
            int freq = store[i].second;
            while (freq) {
                ans.push_back(store[i].first);
                freq--;
            }
        }
        return ans;
    }
};

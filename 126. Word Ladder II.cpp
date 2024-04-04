class Solution {
public:
    void solve(string end, string& begin, vector<vector<string>>& ans,
               vector<string> sample, unordered_map<string, int>& mp) {
        if (end == begin) {
            sample.push_back(end);
            reverse(sample.begin(), sample.end());
            ans.push_back(sample);
            return;
        }
        sample.push_back(end);
        string temp = end;
        for (int i = 0; i < end.length(); i++) {
            char org = end[i];
            for (char ch = 'a'; ch <= 'z'; ch++) {
                end[i] = ch;
                if (mp.find(end) != mp.end() && mp[end] == mp[temp] - 1) {
                    solve(end, begin, ans, sample, mp);
                }
            }
            end[i] = org;
        }
    }
    vector<vector<string>> findLadders(string begin, string end,
                                       vector<string>& word) {
        unordered_set<string> st;
        st.insert(word.begin(), word.end());
        unordered_map<string, int> mp;
        queue<pair<string, int>> q;
        q.push({begin, 1});
        st.erase(begin);
        while (!q.empty()) {
            string temp = q.front().first;
            int lvl = q.front().second;
            mp[temp] = lvl;
            q.pop();
            for (int i = 0; i < temp.length(); i++) {
                char org = temp[i];
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    temp[i] = ch;
                    if (st.find(temp) != st.end()) {
                        q.push({temp, lvl + 1});
                        st.erase(temp);
                    }
                }
                temp[i] = org;
            }
        }
        vector<vector<string>> ans;
        vector<string> sample;
        solve(end, begin, ans, sample, mp);
        return ans;
    }
};

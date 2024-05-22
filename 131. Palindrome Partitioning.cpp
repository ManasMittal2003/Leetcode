class Solution {
public:
    bool check(int strt, int end, string& s) {
        while (strt < end) {
            if (s[strt] != s[end]) {
                return false;
            }
            strt++;
            end--;
        }
        return true;
    }
    void solve(int idx, string& s, vector<vector<string>>& ans,
               vector<string> temp) {
        if (idx == s.length()) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < s.length(); i++) {
            if (check(idx, i, s)) {
                temp.push_back(s.substr(idx, i - idx + 1));
                solve(i + 1, s, ans, temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        solve(0, s, ans, temp);
        return ans;
    }
};

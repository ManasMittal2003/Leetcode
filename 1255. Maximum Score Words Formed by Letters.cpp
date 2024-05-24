class Solution {
public:
    int solve(int idx, vector<string>& words, unordered_map<char, int> st,
              unordered_map<char, int>& mp) {
        if (idx >= words.size()) {
            return 0;
        }
        int t = 0, nt = 0;
        bool flag = true;
        int scoreAdd = 0;
        unordered_map<char, int> dup;
        dup = st;
        for (int i = 0; i < words[idx].length(); i++) {
            if (dup[words[idx][i]] == 0) {
                flag = false;
                break;
            }
            scoreAdd = scoreAdd + mp[words[idx][i]];
            dup[words[idx][i]]--;
        }
        if (flag) {
            t = scoreAdd + solve(idx + 1, words, dup, mp);
        }
        nt = solve(idx + 1, words, st, mp);
        return max(t, nt);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters,
                      vector<int>& score) {
        unordered_map<char, int> mp;
        unordered_map<char, int> st;
        for (auto i : letters) {
            st[i]++;
        }
        for (int i = 0; i < 26; i++) {
            mp['a' + i] = score[i];
        }
        return solve(0, words, st, mp);
    }
};

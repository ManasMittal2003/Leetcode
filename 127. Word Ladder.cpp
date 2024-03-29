class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& word) {
        unordered_set<string> st;
        st.insert(word.begin(), word.end());
        queue<pair<string, int>> q;
        q.push({begin, 1});
        st.erase(begin);
        while (!q.empty()) {
            string temp = q.front().first;
            int lvl = q.front().second;
            if (temp == end) {
                return lvl;
            }
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
        return 0;
    }
};

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        queue<pair<string, int>> q;
        q.push({"0000", 0});
        unordered_set<string> st;
        st.insert(deadends.begin(), deadends.end());
        if (st.find("0000") != st.end()) {
            return -1;
        }
        st.insert("0000");
        while (!q.empty()) {
            string node = q.front().first;
            int lvl = q.front().second;
            q.pop();
            if (node == target) {
                return lvl;
            }
            for (int i = 0; i < node.length(); i++) {
                char org = node[i];
                char inc = node[i] == '9' ? '0' : org + 1;
                char dec = node[i] == '0' ? '9' : org - 1;
                node[i] = inc;
                if (st.find(node) == st.end()) {
                    q.push({node, lvl + 1});
                    st.insert(node);
                }
                node[i] = dec;
                if (st.find(node) == st.end()) {
                    q.push({node, lvl + 1});
                    st.insert(node);
                }
                node[i] = org;
            }
        }
        return -1;
    }
};

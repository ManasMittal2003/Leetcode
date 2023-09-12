class Solution {
public:
    int minDeletions(string s) {
        int count = 0;
        map<char, int> mp;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            mp[s[i]]++;
        }
        set<int> st;
        for (auto it : mp) {
            while (st.find(it.second) != st.end()) {
                it.second--; 
                count++;
                if (it.second == 0) {
                    break; 
                }
            }
            if (it.second > 0) {
                st.insert(it.second);
            }
        }
        return count;
    }
};

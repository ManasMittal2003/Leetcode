class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> store;
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '(') {
                store.push_back(i);
                i++;
            } else if (s[i] == ')') {
                int start = store.back() + 1;
                int end = i - 1;
                while (start < end) {
                    swap(s[start++], s[end--]);
                }
                start = store.back();
                end = i - 1;
                s.erase(s.begin() + start);
                s.erase(s.begin() + end);
                store.pop_back();
                i--;
            } else {
                i++;
            }
        }
        return s;
    }
};

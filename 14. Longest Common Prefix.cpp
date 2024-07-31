class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        string common = arr[0];
        string ans = "";
        for (int i = 1; i < arr.size(); i++) {
            string str = arr[i];
            for (int j = 0; j < str.length(); j++) {
                if (str[j] == common[j]) {
                    ans += str[j];
                } else {
                    break;
                }
            }
            common = ans;
            if (common.empty()) {
                break;
            }
            ans.clear();
        }
        if (common.empty()) {
            return "";
        }
        return common;
    }
};

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (int i = 0; i < details.size(); i++) {
            string str = details[i];
            string num = "";
            num.push_back(str[11]);
            num.push_back(str[12]);
            int dig = stoi(num);
            if (dig > 60) {
                cnt++;
            }
        }
        return cnt;
    }
};

class Solution {
public:
    int getLucky(string s, int k) {
        int i = 0;
        int ans;
        string str = "";
        while (i < s.length()) {
            char alphabet = s[i];
            int val = alphabet - 'a' + 1;
            str = str + to_string(val);
            i++;
        }
        int sum = 0;
        while (k) {
            for (int i = 0; i < str.length(); i++) {
                sum = sum + str[i] - '0';
            }
            k--;
            str = to_string(sum);
            ans = sum;
            sum = 0;
        }
        return ans;
    }
};
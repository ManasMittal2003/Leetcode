class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int maxVowel = 0;
        int vowCnt = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vowCnt++;
            }
        }
        maxVowel = vowCnt;
        for (int i = k; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vowCnt++;
            }
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
                vowCnt--;
            }
            maxVowel = max(maxVowel, vowCnt);
        }

        return maxVowel;
    }
};

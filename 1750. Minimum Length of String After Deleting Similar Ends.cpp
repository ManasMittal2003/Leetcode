class Solution {
public:
    int minimumLength(string s) {
        int minlength = s.length();
        int left = 0, right = s.length() - 1;
        while (left < right) {
            while ((left + 1 < right) && (s[left] == s[left + 1])) {
                left++;
            }
            while ((left < right - 1) && (s[right] == s[right - 1])) {
                right--;
            }
            if (s[left] == s[right]) {
                minlength = right - left - 1;
            } else {
                return minlength;
            }
            left++;
            right--;
        }
        return minlength;
    }
};

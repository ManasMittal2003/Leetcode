class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        int num1 = 0;
        int num2 = 0;
        while (i < version1.length() || j < version2.length()) {
            num1 = 0;
            num2 = 0;
            while (i < version1.length() && version1[i] != '.') {
                if (num1 != 0 && version1[i] == '0') {
                    num1 = num1 * 10;
                } else {
                    num1 = num1 * 10 + (version1[i] - '0');
                }
                i++;
            }
            while (j < version2.length() && version2[j] != '.') {
                if (num2 != 0 && version2[j] == '0') {
                    num2 = num2 * 10;
                } else {
                    num2 = num2 * 10 + (version2[j] - '0');
                }
                j++;
            }
            if (num1 > num2) {
                return 1;
            }
            if (num2 > num1) {
                return -1;
            }
            i++;
            j++;
        }
        return 0;
    }
};

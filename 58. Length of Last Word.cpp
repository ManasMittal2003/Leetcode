class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        int i=len-1;
        while(s[i]==' '){
            i--;
        }
        int cnt=0;
        while(i>=0&&s[i]!=' '){
            cnt++;
            i--;
        }
        return cnt;
    }
};

class Solution {
public:
    char findTheDifference(string s, string t) {
        char temp;
        if(s.empty()){
            temp=t[0];
            return temp;
        }
        int sums=0,sumt=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            sums=sums+int(ch);
        }
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            sumt=sumt+int(ch);
        }
        char res=sumt-sums;
        return res;
    }
};

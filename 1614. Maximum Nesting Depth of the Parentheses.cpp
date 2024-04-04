class Solution {
public:
    int maxDepth(string s) {
        int maxdep=0;
        int vp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                vp++;
                maxdep=max(maxdep,vp);
            }else if(s[i]==')'){
                vp--;
            }
        }
        return maxdep;
    }
};

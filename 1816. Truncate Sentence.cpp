class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0,i;
        for(i=0;i<s.length();i++){
            if(s[i]==' '){
                c++;
            }
            if(c==k){
                break;
            }
        }
        s.erase(s.begin()+i,s.end());
        return s;
    }
};

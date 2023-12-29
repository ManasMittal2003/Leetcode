class Solution {
public:
    int maxScore(string s) {
        int numzero=0,numone=0;
        int maxans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                numone++;
            }
        }
        int i=0;
        while(i<s.length()-1){
            if(s[i]=='0'){
                numzero++;
            }else{
                numone--;
            }
            maxans=max(maxans,numzero+numone);
            i++;
        }
        return maxans;
    }
};

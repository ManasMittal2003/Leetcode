class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int i=-1,j=0;
        for(int k=0;k<s.length();k++){
            if(s[k]=='0'){
                i=k;
                break;
            }
        }
        if(i==-1) return s;
        j=i+1;
        while(j<s.length()){
            if(s[j]=='1'){
                swap(s[i],s[j]);
                i++;
            }
            j++;
        }
        int last=s.length()-1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='1'&&s[i+1]=='0'){
                swap(s[i],s[last]);
                break;
            }
        }
        return s;
    }
};

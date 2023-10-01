class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        int len=s.length();
        while(j<len){
            if(s[j]==' '){
                int temp=j-1;
                while(i<temp){
                    swap(s[i++],s[temp--]);
                }
                i=j+1;
            }
            if(j==len-1){
                int temp1=j;
                while(i<temp1){
                    swap(s[i++],s[temp1--]);
                }
            }
            j++;
        }
        return s;
    }
};

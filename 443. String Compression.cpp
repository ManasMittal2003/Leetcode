class Solution {
public:
    int compress(vector<char>& chars){
        int aindex=0;
        int n=chars.size();
        int i=0,j;
        while(i<n){
            j=i+1;
            while(j<n&&chars[i]==chars[j]){
                j++;
            }
            int c=j-i;
            chars[aindex++]=chars[i];
            if(c>1){
                string count=to_string(c);
                for(char ch:count){
                    chars[aindex++]=ch;
                }
            }
            i=j;
        }
        return aindex;
    }
};

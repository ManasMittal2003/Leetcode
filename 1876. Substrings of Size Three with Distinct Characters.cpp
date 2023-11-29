class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=2;
        int ans=0;
        while(j<s.length()){
            if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2]){
                ans++;
            }
            i++;
            j++;
        }
        return ans;
    }
};

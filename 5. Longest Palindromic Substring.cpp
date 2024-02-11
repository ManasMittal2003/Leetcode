class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        int n=s.length();
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        for(int i=1;i<=s.length();i++){
            for(int j=0;i+j-1<n;j++){
                int ending=i+j-1;
                if(i==1){
                    dp[j][ending]=true;
                    if(ending-j+1>ans.length()){
                        ans=s.substr(j,ending-j+1);
                    }
                }
                else if(i==2){
                    if(s[j]==s[ending]){
                        dp[j][ending]=true;
                        if(ending-j+1>ans.length()){
                            ans=s.substr(j,ending-j+1);
                        }
                    }
                }else{
                    if(dp[j+1][ending-1]&&s[j]==s[ending]){
                        dp[j][ending]=true;
                        if(ending-j+1>ans.length()){
                            ans=s.substr(j,ending-j+1);
                        }
                    }
                }
            }
        }
        return ans;
    }
};

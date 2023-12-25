class Solution {
public:
    int solve(int ind,string &s,int &n,vector<int> &dp){
        if(dp[ind]!=-1){
            return dp[ind];
        }
        if(ind==n){
            return dp[ind]=1;
        }
        if(s[ind]=='0'){
            return dp[ind]=0;
        }
        int result=solve(ind+1,s,n,dp);
        if(ind+1<n){
            if((s[ind]=='1')||(s[ind]=='2'&&s[ind+1]<='6')){
                result+=solve(ind+2,s,n,dp);
            }
        }
        return dp[ind]=result;
    }
    int numDecodings(string s) {
        int n=s.length();
        vector<int> dp(101,-1);
        return solve(0,s,n,dp);
        
    }
};

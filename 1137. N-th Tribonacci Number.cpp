class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int first=solve(n-1,dp);
        int second=solve(n-2,dp);
        int third=solve(n-3,dp);
        return dp[n]=first+second+third;
    }
    int tribonacci(int n) {
        if(n<=1) return n;
        if(n==2) return 1;
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        return solve(n,dp);
    }
};

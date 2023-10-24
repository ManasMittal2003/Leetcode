class Solution {
public:
    int fibo(int n,vector<int> &dp){
        if(n<=1){
            return dp[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int last=fibo(n-1,dp);
        int slast=fibo(n-2,dp);
        dp[n]=last+slast;
        return last+slast;
    }
    int fib(int n) {
        if(n==0){
            return 0;
        }
        // if(n==1){
        //     return 1;
        // }
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        int ans=fibo(n,dp);
        return ans;
    }
};

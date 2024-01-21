class Solution {
public:
    int solve(int idx,int amount,vector<int> coins,int dp[][5001]){
        if(idx>=coins.size()){
            return 0;
        }
        if(amount==0){
            return 1;
        }
        if(amount<0){
            return 0;
        }
        if(dp[idx][amount]!=-1){
            return dp[idx][amount];
        }
        int take;
        take=solve(idx,amount-coins[idx],coins,dp);
        int skip=solve(idx+1,amount,coins,dp);
        return dp[idx][amount]=take+skip;
    }
    int change(int amount, vector<int>& coins) {

        int dp[301][5001];
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,amount,coins,dp);
        return ans;
    }
};

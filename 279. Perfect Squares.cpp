class Solution {
public:
    int solve(int ind,int target,int sum,vector<int> &sq,vector<vector<int>> &dp){
        if(ind>=sq.size()){
            return 1e9;
        }
        if(sum>target){
            return 1e9;
        }
        if(dp[ind][sum]!=-1){
            return dp[ind][sum];
        }
        if(sum==target){
            return 0;
        }
        int take=1+solve(ind,target,sum+sq[ind],sq,dp);
        int n_take=solve(ind+1,target,sum,sq,dp);
        return dp[ind][sum]=min(take,n_take);
    }
    int numSquares(int n) {
        vector<int> sq;
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(j*j==i){
                    sq.push_back(i);
                    break;
                }
            }
        }
        vector<vector<int>> dp(sq.size(),vector<int>(n+1,-1));
        return solve(0,n,0,sq,dp);
    }
};

class Solution {
public:
    int solve(int col,int row,vector<vector<int>>& matrix,vector<vector<int>> &dp){
        if(col<0||col>=matrix.size()){
            return 1e8;
        }
        if(row==matrix.size()-1){
            return matrix[row][col];
        }
        if(dp[row][col]!=INT_MAX){
            return dp[row][col];
        }
        int fres=INT_MAX;
        fres=min(fres,matrix[row][col]+solve(col-1,row+1,matrix,dp));
        fres=min(fres,matrix[row][col]+solve(col,row+1,matrix,dp));
        fres=min(fres,matrix[row][col]+solve(col+1,row+1,matrix,dp));
        return dp[row][col]=fres;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minsum=INT_MAX;
        vector<vector<int>> dp(101,vector<int>(101,INT_MAX));
        for(int col=0;col<matrix[0].size();col++){
            minsum=min(minsum,solve(col,0,matrix,dp));
        }
        return minsum;
    }
};

/*Memo
class Solution {
public:
    int solve(vector<vector<int>> matrix,int row,int col,int dp[][101]){
        if(row==matrix.size()-1){
            return matrix[row][col];
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int sum=matrix[row][col];
        int minsum=INT_MAX;
        if(row+1<matrix.size()&&col-1>=0)
            minsum=min(minsum,sum+solve(matrix,row+1,col-1,dp));
        if(row+1<matrix.size())
            minsum=min(minsum,sum+solve(matrix,row+1,col,dp));
        if(row+1<matrix.size()&&col+1<matrix.size())
            minsum=min(minsum,sum+solve(matrix,row+1,col+1,dp));
        return dp[row][col]=minsum;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int col=matrix[0].size();
        int minsum=INT_MAX;
        int dp[101][101];
        memset(dp,-1,sizeof(dp));
        int row=0;
        for(int i=0;i<col;i++){
            minsum=min(minsum,solve(matrix,row,i,dp));
        }
        return minsum;
    }
};
*/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int temp[row][col];
        for(int i=0;i<col;i++){
            temp[0][i]=matrix[0][i];
        }
        int j,k;
        for(j=1;j<row;j++){
            for(k=0;k<col;k++){
                if(k==0){
                    temp[j][k]=matrix[j][k]+min(temp[j-1][k],temp[j-1][k+1]);
                }
                else if(k==col-1){
                    temp[j][k]=matrix[j][k]+min(temp[j-1][k],temp[j-1][k-1]);
                }else{
                    temp[j][k]=matrix[j][k]+min(temp[j-1][k],min(temp[j-1][k+1],temp[j-1][k-1]));
                }
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<col;i++){
            if(temp[j-1][i]<mini){
                mini=temp[j-1][i];
            }
        }
        return mini;
    }
};

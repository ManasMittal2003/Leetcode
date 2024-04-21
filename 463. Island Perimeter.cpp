class Solution {
public:
    void dfs(int row,int col,int &ans,vector<vector<int>> &grid,vector<vector<bool>> &vis){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=true;
        int drow[4]={0,-1,0,1};
        int dcol[4]={-1,0,1,0};
        for(int i=0;i<4;i++){
            int nr=row+drow[i];
            int nc=col+dcol[i];
            if(nr<0||nr>=n) ans++;
            else if(nc<0||nc>=m) ans++;
            else if(grid[nr][nc]==0){
                ans++;
            }
        }
        for(int i=0;i<4;i++){
            int nr=row+drow[i];
            int nc=col+dcol[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&vis[nr][nc]==false){
                dfs(nr,nc,ans,grid,vis);
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool> (m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==false){
                    dfs(i,j,ans,grid,vis);
                }
            }
        }
        return ans;
    }
};

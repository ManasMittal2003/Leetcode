class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<int>> &visited){
        visited[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();
        int row=i;
        int col=j;
        for(int i=-1;i<=1;i++){
            if(i==0) continue;
            int newcol=col+i;
            if((newcol>=0&&newcol<m)&&(grid[row][newcol]=='1')&&(visited[row][newcol]==0)){
                dfs(grid,row,newcol,visited);
            }
        }
        for(int i=-1;i<=1;i++){
            if(i==0) continue;
            int newrow=row+i;
            if((newrow>=0&&newrow<n)&&(grid[newrow][col]=='1')&&(visited[newrow][col]==0)){
                dfs(grid,newrow,col,visited);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int islands=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&visited[i][j]==0){
                    islands++;
                    dfs(grid,i,j,visited);
                }
            }
        }
        return islands;
    }
};

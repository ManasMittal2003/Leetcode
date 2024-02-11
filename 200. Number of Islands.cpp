class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j,vector<vector<int>> &visited){
        queue<pair<int,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        q.push(make_pair(i,j));
        visited[i][j]=1;
        while(!q.empty()){
            pair<int,int> temp=q.front();
            q.pop();
            int row=temp.first;
            int col=temp.second;
            for(int i=-1;i<=1;i++){
                if(i!=0){
                    int newcol=col+i;
                    if((newcol>=0&&newcol<m)&&(grid[row][newcol]=='1')&&(visited[row][newcol]==0)){
                        visited[row][newcol]=1;
                        bfs(grid,row,newcol,visited);
                    }
                }
            }
            for(int i=-1;i<=1;i++){
                if(i!=0){
                    int newrow=row+i;
                    if((newrow>=0&&newrow<n)&&(grid[newrow][col]=='1')&&(visited[newrow][col]==0)){
                        visited[newrow][col]=1;
                        bfs(grid,newrow,col,visited);
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(visited[i][j]==0&&grid[i][j]=='1'){
                    cnt++;
                    bfs(grid,i,j,visited);
                }
            }
        }
        return cnt;
    }
};

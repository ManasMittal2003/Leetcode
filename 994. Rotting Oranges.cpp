class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        int maxtime=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            maxtime=max(maxtime,t);
            int drow[4]={-1,0,+1,0};
            int dcol[4]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int newrow=r+drow[i];
                int newcol=c+dcol[i];
                if((newrow>=0&&newrow<n)&&(newcol>=0&&newcol<m)&&(grid[newrow][newcol]==1)){
                    q.push({{newrow,newcol},t+1});
                    grid[newrow][newcol]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return maxtime;
    }
};

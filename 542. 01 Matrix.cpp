class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans(mat.size(),vector<int>(mat[0].size(),0));
        int n=mat.size();
        int m=mat[0].size();
        bool vis[n][m];
        memset(vis,false,sizeof(vis));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push(make_pair(make_pair(i,j),0));
                    vis[i][j]=true;
                }
            }
        }
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            ans[r][c]=dist;
            int drow[]={1,-1,0,0};
            int dcol[]={0,0,1,-1};
            for(int i=0;i<4;i++){
                int newrow=r+drow[i];
                int newcol=c+dcol[i];
                if((newrow>=0&&newrow<n)&&(newcol>=0&&newcol<m)&&(vis[newrow][newcol]==false)){
                    q.push(make_pair(make_pair(newrow,newcol),dist+1));
                    vis[newrow][newcol]=true;
                }
            }
        }
        return ans;
    }
};

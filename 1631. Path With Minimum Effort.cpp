class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n=h.size();
        int m=h[0].size();
        vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
        ans[0][0]=0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        int drow[4]={0,-1,0,1};
        int dcol[4]={-1,0,1,0};
        while(!pq.empty()){
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            int maxd=pq.top().first;
            pq.pop();
            if(row==n-1&&col==m-1){
                return maxd;
            }
            for(int i=0;i<4;i++){
                int nr=row+drow[i];
                int nc=col+dcol[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m){
                    if(ans[nr][nc]>max(maxd,abs(h[row][col]-h[nr][nc]))){
                        ans[nr][nc]=max(maxd,abs(h[row][col]-h[nr][nc]));
                        pq.push({max(maxd,abs(h[row][col]-h[nr][nc])),{nr,nc}});
                    }
                }
            }
        }
        return 0;
    }
};

class Solution {
public:
    void dfs(vector<vector<int>>& image,int sr,int sc,int &newColor,vector<vector<int>> &visited){
        visited[sr][sc]=1;
        int row=sr;
        int col=sc;
        int n=image.size();
        int m=image[0].size();
        for(int i=-1;i<=1;i++){
            if(i==0) continue;
            int newcol=col+i;
            if((newcol>=0&&newcol<m)&&(image[row][newcol]==image[sr][sc])&&(visited[row][newcol]==0)){
                dfs(image,row,newcol,newColor,visited);
            }
        }
        for(int i=-1;i<=1;i++){
            if(i==0) continue;
            int newrow=row+i;
            if((newrow>=0&&newrow<n)&&(image[newrow][col]==image[sr][sc])&&(visited[newrow][col]==0)){
                dfs(image,newrow,col,newColor,visited);
            }
        }
        image[sr][sc]=newColor;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        dfs(image,sr,sc,newColor,visited);
        return image;
    }
};

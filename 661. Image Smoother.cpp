class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> direct = {{-1,-1},{-1,0},{-1,1},
        {0,-1},{0,0},{0,1},{1,-1},{1,0},{1,1}};
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=0;
                int cnt=0;
                for(auto it:direct){
                    int i_=i+it[0];
                    int j_=j+it[1];
                    if(i_>=0&&i_<m&&j_>=0&&j_<n){
                        sum=sum+img[i_][j_];
                        cnt++;
                    }
                }
                sum=sum/cnt;
                ans[i][j]=sum;
            }
        }
        return ans;
    }
};

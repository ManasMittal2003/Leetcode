class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> numrow(mat.size());
        vector<int> numcol(mat[0].size());
        for(int i=0;i<mat.size();i++){
            numrow[i]=accumulate(mat[i].begin(),mat[i].end(),0);
        }
        for(int i=0;i<mat[0].size();i++){
            int sum=0;
            for(int j=0;j<mat.size();j++){
                sum=sum+mat[j][i];
            }
            numcol[i]=sum;
        }
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            if(numrow[i]==1){
                for(int j=0;j<mat[0].size();j++){
                    if(mat[i][j]==1){
                        if(numcol[j]==1){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};

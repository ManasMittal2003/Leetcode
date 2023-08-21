class Solution {
public:
    int primary(vector<vector<int>>& mat){
        int sum=0;
        for(int i=0;i<mat[0].size();i++){
            sum=sum+mat[i][i];
        }
        return sum;
    }
    int secondary(vector<vector<int>>& mat){
        int sum=0;
        int j=mat[0].size()-1;
        for(int i=0;i<mat[0].size();i++){
            sum=sum+mat[i][j];
            j--;
        }
        int mid=mat.size()/2;
        sum=sum-mat[mid][mid];
        return sum;
    }
    int diagonalSum(vector<vector<int>>& mat) {
        if(mat.size()%2!=0){
            int sump=primary(mat);
            int sums=secondary(mat);
            return (sump+sums);
        }
        else{
            int sum1=0,sum2=0,j=mat[0].size()-1;
            for(int i=0;i<mat[0].size();i++){
                sum1=sum1+mat[i][i];
            }
            for(int i=0;i<mat[0].size();i++){
                sum2=sum2+mat[i][j];
                j--;
            }
            return (sum1+sum2);
        }
    }
};

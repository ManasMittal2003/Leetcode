class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int pointer=m-1;
        int row=0;
        while(pointer>=0&&row<n){
            if(matrix[row][pointer]==target){
                return true;
            }
            else if(matrix[row][pointer]<target){
                row++;
            }else{
                pointer--;
            }
        }
        return false;
    }
};

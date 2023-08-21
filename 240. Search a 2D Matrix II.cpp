class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int s=0,e=matrix[i].size()-1;
            int mid=s+(e-s)/2;
            while(s<=e){
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
                mid=s+(e-s)/2;
            }
        }
        return false;
    }
};

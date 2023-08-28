class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& MATRIX) {
        vector<int> ans;
        int left=0,top=0;
        int right=MATRIX[0].size()-1;
        int bottom=MATRIX.size()-1;
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(MATRIX[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(MATRIX[i][right]);
            }
            right--;
            if(top<=bottom){
                for (int i = right; i >= left; i--) {
                ans.push_back(MATRIX[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for (int i = bottom; i >= top; i--) {
                ans.push_back(MATRIX[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

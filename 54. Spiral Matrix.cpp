class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,down=n-1;
        int left=0,right=m-1;
        int count=0;
        int total=n*m;
        while(count<total){
            for(int i=left;count<total && i<=right;i++){
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for(int i=top;count<total && i<=down;i++){
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;
            for(int i=right;count<total && i>=left;i--){
                ans.push_back(matrix[down][i]);
                count++;
            }
            down--;
            for(int i=down;count<total && i>=top;i--){
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return ans;
    }
};

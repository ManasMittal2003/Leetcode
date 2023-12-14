class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> onesrow(grid.size());
        vector<int> onescol(grid[0].size());
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                onesrow[i]+=grid[i][j];
                onescol[j]+=grid[i][j];
            }
        }
        vector<vector<int>> ans;
        for(int i=0;i<grid.size();i++){
            vector<int> temp;
            for(int j=0;j<grid[i].size();j++){
                int diff=onesrow[i]+onescol[j]-(grid[i].size()-onesrow[i])-(grid.size()-onescol[j]);
                temp.push_back(diff);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

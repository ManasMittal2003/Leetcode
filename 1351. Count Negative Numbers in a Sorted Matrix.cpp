class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            int low=0,high=grid[i].size()-1;
            int mid=low+(high-low)/2;
            int strt=-1;
            while(low<=high){
                if(grid[i][mid]<0){
                    strt=mid;
                    high=mid-1;
                }else{
                    low=mid+1;
                }
                mid=low+(high-low)/2;
            }
            if(strt!=-1){
                count=count+(grid[i].size()-strt);
            }
        }
        return count;
    }
};

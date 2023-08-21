#include<bits/stdc++.h>
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int mat[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=0;
            }
        }
        for(int k=0;k<indices.size();k++){
            bool flag=true;
            for(int y=0;y<indices[k].size();y++){
                if(flag==true){
                    for(int i=0;i<n;i++){
                        mat[indices[k][y]][i]++;
                    }
                    flag=false;
                }
                else{
                    for(int j=0;j<m;j++){
                        mat[j][indices[k][y]]++;
                    }
                }
            }
        }
        int odd=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]%2!=0){
                    odd++;
                }
            }
        }
        return odd;
    }
};

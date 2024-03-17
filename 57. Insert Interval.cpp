class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& nw) {
        vector<vector<int>> ans;
        int n=inter.size(),i=0;
        while(i<n && inter[i][1]<nw[0]){
            ans.push_back(inter[i]);
            i++;
        }
        while(i<n && inter[i][0]<=nw[1]){
            nw[0]=min(inter[i][0],nw[0]);
            nw[1]=max(inter[i][1],nw[1]);
            i++;
        }
        ans.push_back(nw);
        while(i<n){
            ans.push_back(inter[i]);
            i++;
        }
        return ans;
    }
};

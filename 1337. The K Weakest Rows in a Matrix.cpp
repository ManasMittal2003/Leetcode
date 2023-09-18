class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b) {
        if (a.second != b.second) {
            return a.second < b.second;
        }
        return a.first < b.first;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> mp;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int num=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    num++;
                }
                else{
                    break;
                }
            }
            mp.push_back(make_pair(i,num));
            num=0;
        }
        sort(mp.begin(),mp.end(),cmp);
        for(int i=0;i<k;i++){
            ans.push_back(mp[i].first);
        }
        return ans;
    }
};

class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        vector<pair<int,int>> p;
        int ans=0;
        for(int i=0;i<points.size();i++){
            p.push_back({points[i][0],points[i][1]});
        }
        sort(p.begin(),p.end());
        int strt=p[0].first;
        for(int i=1;i<p.size();i++){
            if(p[i].first-strt>w){
                ans++;
                strt=p[i].first;
            }
        }
        return ans+1;
    }
};

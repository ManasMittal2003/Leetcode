class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });
        int maxwidth=INT_MIN;
        for(int i=1;i<points.size();i++){
            if((points[i][0]-points[i-1][0])>maxwidth){
                maxwidth=points[i][0]-points[i-1][0];
            }
        }
        return maxwidth;
    }
};

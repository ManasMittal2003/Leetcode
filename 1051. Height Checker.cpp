class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        temp=heights;
        sort(temp.begin(),temp.end());
        int i=0,c=0;
        while(i<heights.size()){
            if(heights[i]!=temp[i]){
                c++;
            }
            i++;
        }
        return c;
    }
};

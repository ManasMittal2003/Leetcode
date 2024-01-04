class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev(heights);
        vector<int> next(heights);
        stack<int> st1;
        st1.push(-1);
        stack<int> st2;
        st2.push(-1);
        for(int i=heights.size()-1;i>=0;i--){
            while(st1.top()!=-1&&heights[st1.top()]>=heights[i]){
                st1.pop();
            }
            next[i]=st1.top();
            st1.push(i);
        }
        for(int i=0;i<heights.size();i++){
            while(st2.top()!=-1&&heights[st2.top()]>=heights[i]){
                st2.pop();
            }
            prev[i]=st2.top();
            st2.push(i);
        }
        int area=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=heights.size();
            }
            int b=next[i]-prev[i]-1;
            area=max(area,l*b);
        }
        return area;
    }
};

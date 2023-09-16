class Solution {
    public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;

        while (left < right) {
            int currentArea = min(height[left], height[right]) * (right - left);
            maxarea = max(maxarea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxarea;
    }
};
//my code
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         pair<int,int> p;
//         int maximum=INT_MIN;
//         for(int i=height.size()-1;i>=0;i--){
//             if(height[i]>=maximum){
//                 p={height[i],i};
//                 maximum=height[i];
//             }
//         }
//         int i=0,j=height.size()-1;
//         long maxarea=INT_MIN;
//         while(i<p.second){
//             int l=min(p.first,height[i]);
//             int b=(p.second+1)-(i+1);
//             if(l*b>maxarea){
//                 maxarea=l*b;
//             }
//             i++;
//         }
//         while(j>p.second){
//             int l=min(p.first,height[j]);
//             int b=(j+1)-(p.second+1);
//             if(l*b>maxarea){
//                 maxarea=l*b;
//             }
//             j--;
//         }
//         return maxarea;
//     }
// };

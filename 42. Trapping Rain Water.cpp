//Prefix Store Approach

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n, 0);
        vector<int> rmax(n, 0);
        int sum = 0;
        int currmax = height[0];
        for (int i = 1; i < n; i++) {
            lmax[i] = currmax;
            if (height[i] > currmax)
                currmax = height[i];
        }

        currmax = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = currmax;
            if (height[i] > currmax)
                currmax = height[i];
        }
        int i = 1;
        while (i < n - 1) {
            int h = min(lmax[i], rmax[i]) - height[i];
            sum += h > 0 ? h : 0;
            i++;
        }
        return sum;
    }
};

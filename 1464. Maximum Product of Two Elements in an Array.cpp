class Solution {
public:
    int maxProduct(vector<int>& num) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for (int num : num) {
            if (num >= max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};

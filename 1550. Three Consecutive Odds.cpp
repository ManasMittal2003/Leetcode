class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size() < 3) {
            return false;
        }
        int i = 0, j = 2;
        while (j < arr.size()) {
            if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[j] % 2 != 0) {
                return true;
            }
            i = i + 1;
            j = j + 1;
        }
        return false;
    }
};

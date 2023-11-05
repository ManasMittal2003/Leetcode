class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if (k == 1) {
            return max(arr[0], arr[1]);
        }
        int current = arr[0];
        int consecutiveWins = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (current > arr[i]) {
                consecutiveWins++;
                if (consecutiveWins == k) {
                    return current;
                }
            } else {
                current = arr[i];
                consecutiveWins = 1;
            }
            if (consecutiveWins == 1 && i == arr.size() - 1) {
                break;
            }
        }
        return current;
    }
};

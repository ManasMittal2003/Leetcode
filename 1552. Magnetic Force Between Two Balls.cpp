class Solution {
public:
    bool check(int mid, vector<int>& arr, int m) {
        int c = 1;
        int p1 = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - p1 >= mid) {
                c++;
                p1 = arr[i];
            }
        }
        if (c >= m)
            return true;
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 0;
        int high = position[position.size() - 1] - position[0];
        int ans;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid, position, m)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

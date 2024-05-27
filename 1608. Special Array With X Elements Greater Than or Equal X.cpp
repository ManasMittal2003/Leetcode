class Solution {
public:
    int check(int mid, vector<int> nums) {
        int cnt = 0;
        for (auto i : nums) {
            if (i >= mid) {
                cnt++;
            }
        }
        return cnt;
    }
    int specialArray(vector<int>& nums) {
        int l = 0, h = nums.size();
        while (l <= h) {
            int mid = l + (h - l) / 2;
            int cnt = check(mid, nums);
            if (cnt == mid) {
                return mid;
            } else if (cnt > mid) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return -1;
    }
};

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int minidx = -1, maxidx = -1, culprit = -1;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == minK)
                minidx = i;
            if (nums[i] == maxK)
                maxidx = i;
            if (nums[i] < minK || nums[i] > maxK)
                culprit = i;
            int smaller = min(minidx, maxidx);
            ans += (smaller - culprit <= 0) ? 0 : smaller - culprit;
            i++;
        }
        return ans;
    }
};

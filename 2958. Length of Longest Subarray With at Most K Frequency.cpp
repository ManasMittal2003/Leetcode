class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mapping;
        int maxlen = 0;
        int i = 0, j = 0;
        int maxfreq;
        while (j < nums.size()) {
            mapping[nums[j]]++;
            maxfreq = mapping[nums[j]];
            if (maxfreq > k) {
                while (mapping[nums[j]] > k) {
                    mapping[nums[i]]--;
                    i++;
                }
            }
            maxlen = max(maxlen, j - i + 1);
            j++;
        }
        return maxlen;
    }
};

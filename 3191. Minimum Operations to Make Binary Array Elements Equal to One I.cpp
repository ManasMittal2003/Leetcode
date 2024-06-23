class Solution {
public:
    int minOperations(vector<int>& nums) {
        int opcnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0 && nums.size() - i >= 3) {
                nums[i] = !nums[i];
                nums[i + 1] = !nums[i + 1];
                nums[i + 2] = !nums[i + 2];
                opcnt++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return -1;
            }
        }
        return opcnt;
    }
};

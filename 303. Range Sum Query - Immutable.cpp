class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums1) {
        nums.push_back(nums1[0]);
        for (int i = 1; i < nums1.size(); i++) {
            nums.push_back(nums.back() + nums1[i]);
        }
    }

    int sumRange(int left, int right) {
        if (left == 0)
            return nums[right];
        else {
            return nums[right] - nums[left - 1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

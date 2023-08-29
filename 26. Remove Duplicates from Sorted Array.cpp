class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> st;
        vector<int> temp;
        st.push(nums[0]);
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(st.top()!=nums[i]){
                st.push(nums[i]);
                temp.push_back(nums[i]);
            }
        }
        nums=temp;
        return nums.size();
    }
};

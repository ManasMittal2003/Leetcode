class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        stack<int> st;
        vector<int> ans;
        st.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(st.top()!=nums[i]){
                if(st.size()>(n/3)){
                    ans.push_back(st.top());
                }
                while(!st.empty()){
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        if(st.size()>(n/3)){
            ans.push_back(st.top());
        }
        return ans;
    }
};

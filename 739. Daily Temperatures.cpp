class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int> st;
        vector<int> ans(n,0);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty()&&temp[i]>=temp[st.top()]){
                st.pop();
            }
            if(st.empty()){
                st.push(i);
            }
            else{
                ans[i]=st.top()-i;
                st.push(i);
            }
        }
        return ans;
    }
};

#define ll long long int
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size(),pos=0;
        ll ans=0,mod=1e9 + 7;
        stack<int> st;
        vector<int> left(n,-1),right(n,n);
        while(pos<n){
            if(st.empty()){
                st.push(pos);
                pos++;
            }else{
                if(arr[pos]<arr[st.top()]){
                    right[st.top()]=pos;
                    st.pop();
                }else{
                    st.push(pos);
                    pos++;
                }
            }
        }
        pos=n-1;
        while(!st.empty()){
            st.pop();
        }
        while(pos>=0){
            if(st.empty()){
                st.push(pos);
                pos--;
            }else{
                if(arr[pos]<=arr[st.top()]){
                    left[st.top()]=pos;
                    st.pop();
                }else{
                    st.push(pos);
                    pos--;
                }
            }
        }
        for(int i=0;i<n;i++){
            ll some=((right[i]-i)*(i-left[i]))%mod;
            some=(some*arr[i])%mod;
            ans=(ans + some)%mod;
        }
        return ans;
    }
};

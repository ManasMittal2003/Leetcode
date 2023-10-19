class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        int i=1;
        if(s[0]!='#'){
            st.push(s[0]);
        }
        while(i<s.length()){
            if(st.empty()&&s[i]=='#'){
                i++;
                continue;
            }
            if(s[i]=='#'){
                st.pop();
            }else{
                st.push(s[i]);
            }
            i++;
        }
        s.clear();
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        i=1;
        if(t[0]!='#'){
            st.push(t[0]);
        }
        while(i<t.length()){
            if(st.empty()&&t[i]=='#'){
                i++;
                continue;
            }
            if(t[i]=='#'){
                st.pop();
            }else{
                st.push(t[i]);
            }
            i++;
        }
        t.clear();
        while(!st.empty()){
            t.push_back(st.top());
            st.pop();
        }
        return s==t;
    }
};

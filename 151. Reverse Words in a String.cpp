class Solution {
public:
    string reverseWords(string str) {
        string ans="";
        string temp;
        stack<string> st;
        for(int i=0;i<str.length();i++){
            if(str[i]!=' '){
                temp.push_back(str[i]);
            }
            else if((str[i]==' ')&&(!temp.empty())){
                st.push(temp);
                temp.clear();
            }
        }
        if(!temp.empty()){
            st.push(temp);
        }
        while(!st.empty()){
            ans=ans+st.top()+" ";
            st.pop();
        }
        ans.erase(ans.begin()+(ans.length()-1));
        return ans;
    }
};

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> star;
        stack<char> store;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                store.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else if(s[i]==')'&&!store.empty()){
                store.pop();
            }
            else if(s[i]==')'&&!star.empty()){
                star.pop();
            }
            else if(s[i]==')'&&store.empty()&&star.empty()){
                return false;
            }
        }
        if(!store.empty()&&star.empty()){
            return false;
        }
        while(!store.empty()&&!star.empty()){
            if(store.top()<star.top()){
                store.pop();
                star.pop();
            }
            else{
                return false;
            }
        }
        return store.empty();
    }
};

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int> store;
        for (int i = 0; i < s.length(); i++) 
        {
            if (store.empty() && s[i] == ')') 
            {
                store.push_back(i);
            } 
            else if (s[i] == '(') 
            {
                store.push_back(i);
            } 
            else if (s[i] == ')') 
            {
                if (!store.empty() && s[store.back()] == '(') 
                {
                    store.pop_back();
                } 
                else 
                {
                    store.push_back(i);
                }
            }
        }
        for (int i = store.size() - 1; i >= 0; i--) 
        {
            s.erase(store[i], 1);
        }
        return s;
    }
};

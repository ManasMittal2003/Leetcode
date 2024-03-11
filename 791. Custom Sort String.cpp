class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        string res="";
        for(int i=0;i<order.length();i++){
            char ch=order[i];
            while(mp[ch]!=0){
                res.push_back(ch);
                mp[ch]--;
            }
        }
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            while(mp[ch]!=0){
                res.push_back(ch);
                mp[ch]--;
            }
        }
        return res;
    }
};

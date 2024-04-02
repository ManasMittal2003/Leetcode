class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,char> mp;
        unordered_map<char,char> mp2;
        int i=0;
        while(i<t.length()){
            if(mp.find(t[i])!=mp.end()){
                if(s[i]!=mp[t[i]]){
                    return false;
                }
            }else if(mp2.find(s[i])!=mp2.end()){
                if(t[i]!=mp2[s[i]]){
                    return false;
                }
            }
            mp[t[i]]=s[i];
            mp2[s[i]]=t[i];
            i++;
        }
        return true;
    }
};

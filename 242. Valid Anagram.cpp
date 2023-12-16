class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counts(27,0);
        vector<int> countt(27,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            counts[s[i]-'a']++;
            countt[t[i]-'a']++;
        }
        return counts==countt;
    }
};

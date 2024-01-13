class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> cnt(27,0);
        for(int i=0;i<t.length();i++){
            cnt[t[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<s.length();i++){
            if(cnt[s[i]-'a']==0){
                count++;
            }else{
                cnt[s[i]-'a']--;
            }
        }
        return count;
    }
};

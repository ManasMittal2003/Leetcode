class Solution {
public:
    bool check(char &ch,unordered_map<char,int> &mp){
        if(mp.find(ch)==mp.end()){
            return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        int l=0,r=0;
        int maxlen=INT_MIN;
        unordered_map<char,int> mp;
        while(r<s.length()){
            if(check(s[r],mp)){
                while(l<r&&check(s[r],mp)){
                    mp.erase(s[l]);
                    l++;
                }
                
            }
            maxlen=max(maxlen,r-l+1);
            mp[s[r]]++;
            r++;
        }
        return maxlen;
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        int count[26]={0};
        vector<char> res;
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]==1){
                res.push_back('a'+i);
            }
        }
        if(res.empty()){
            return -1;
        }
        int min=INT_MAX;
        for(int i=0;i<res.size();i++){
            int j=s.find(res[i]);
            if(j<min){
                min=j;
            }
        }
        return min;
    }
};

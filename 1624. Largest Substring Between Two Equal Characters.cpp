class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int> mapping;
        int maxlen=-1;
        for(int i=0;i<s.length();i++){
            if(mapping.find(s[i])!=mapping.end()){
                maxlen=max(maxlen,i-mapping[s[i]]-1);
            }
            else{
                mapping[s[i]]=i;
            }
        }
        return maxlen;
    }
};

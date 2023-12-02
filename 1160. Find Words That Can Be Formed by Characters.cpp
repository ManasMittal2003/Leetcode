class Solution {
public:
    bool check(string str,vector<int> count){
        int i=0;
        while(i<str.length()){
            if((count[str[i]-'a'])==0){
                return false;
            }else{
                count[str[i]-'a']--;
            }
            i++;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(27,0);
        for(int i=0;i<chars.length();i++){
            count[chars[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            if(check(words[i],count)){
                ans=ans+words[i].length();
            }
        }
        return ans;
    }
};

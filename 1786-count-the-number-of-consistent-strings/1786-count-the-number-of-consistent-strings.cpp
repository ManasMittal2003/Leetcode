class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        unordered_map<char,bool> mp;
        for(auto i:allowed){
            mp[i] = true;
        }
        for(int i=0;i<words.size();i++){
            string str = words[i];
            int j = 0;
            bool flag = true;
            while(j<str.length()){
                if(mp[str[j]] == false){
                    flag = false;
                    break;
                }
                j++;
            }
            if(flag){
                cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        vector<int> store(26,0);
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            for(int i=0;i<s.length();i++){
                store[s[i]-'a']++;
            }
            string temp="";
            for(int j=0;j<26;j++){
                if(store[j]>0){
                    while(store[j]!=0){
                        temp.push_back('a'+j);
                        store[j]--;
                    }
                }
            }
            mp[temp].push_back(strs[i]);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

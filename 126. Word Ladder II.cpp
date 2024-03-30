class Solution {
public:
    void dfs(string end,string &begin,map<string,int> &mp,vector<vector<string>> &ans,vector<string> sample){
        if(end==begin){
            sample.push_back(end);
            reverse(sample.begin(),sample.end());
            ans.push_back(sample);
            return;
        }
        sample.push_back(end);
        for(int i=0;i<end.length();i++){
            char org=end[i];
            string temp=end;
            for(char ch='a';ch<='z';ch++){
                end[i]=ch;
                if((mp.find(end)!=mp.end())&&(mp[end]+1==mp[temp])){
                    dfs(end,begin,mp,ans,sample);
                }
            }
            end[i]=org;
        }
    }
    vector<vector<string>> findLadders(string begin, string end, vector<string>& word) {
        vector<vector<string>> ans;
        queue<pair<string,int>> q;
        map<string,int> mp;
        set<string> st;
        st.insert(word.begin(),word.end());
        q.push({begin,0});
        st.erase(begin);
        while(!q.empty()){
            string temp=q.front().first;
            int lvl=q.front().second;
            q.pop();
            mp[temp]=lvl;
            for(int i=0;i<temp.length();i++){
                char org=temp[i];
                for(char ch='a';ch<='z';ch++){
                    temp[i]=ch;
                    if(st.find(temp)!=st.end()){
                        st.erase(temp);
                        q.push({temp,lvl+1});
                    }
                }
                temp[i]=org;
            }
        }
        vector<string> sample;
        dfs(end,begin,mp,ans,sample);
        return ans;
    }
};

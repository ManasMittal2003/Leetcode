class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<string> ans;
        vector<int> store(26,0);
        for(int i=0;i<words[0].length();i++){
            store[words[0][i]-'a']++;
        }
        for(int i=1;i<words.size();i++){
            vector<int> temp(26,0);
            for(int j=0;j<words[i].length();j++){
                temp[words[i][j]-'a']++;
            }
            for(int k=0;k<26;k++){
                if(store[k]!=0){
                    if(temp[k]!=0){
                        store[k]=min(temp[k],store[k]);
                    }else{
                        store[k]=0;
                    }
                }
            }
        }
        for(int i=0;i<26;i++){
            string temp="";
            if(store[i]!=0){
                int cnt=store[i];
                char ch='a'+i;
                temp.push_back(ch);
                while(cnt!=0){
                    ans.push_back(temp);
                    cnt--;
                }
            }
        }
        return ans;
    }
};

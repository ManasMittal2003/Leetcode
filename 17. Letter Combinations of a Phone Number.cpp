class Solution {
public:
    void solve(int ind,string &digits,unordered_map<char,string> &mp,vector<string> &ans,string &temp){
        if(ind>=digits.length()){
            ans.push_back(temp);
            return;
        }
        string str=mp[digits[ind]];
        for(int i=0;i<str.length();i++){
            temp.push_back(str[i]);
            solve(ind+1,digits,mp,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        unordered_map<char,string> mp;
        mp['1']="";
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string> ans;
        string temp="";
        solve(0,digits,mp,ans,temp);
        return ans;
    }
};

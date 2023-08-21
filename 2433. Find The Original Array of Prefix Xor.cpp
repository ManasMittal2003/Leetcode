class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        for(int i=0;i<pref.size()-1;i++){
            ans.push_back(pref[i]^pref[i+1]);
        }
        return ans;
    }
};

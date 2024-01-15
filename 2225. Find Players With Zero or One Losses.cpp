class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost;
        for(int i=0;i<matches.size();i++){
            lost[matches[i][1]]++;
        }
        vector<int> lostone;
        vector<int> notlost;

        for(int i=0;i<matches.size();i++){
            int loser=matches[i][1];
            int winner=matches[i][0];
            if(lost.find(winner)==lost.end()){
                notlost.push_back(winner);
                lost[winner]++;
            }
            if(lost[loser]==1){
                lostone.push_back(loser);
            }
        }
        sort(lostone.begin(),lostone.end());
        sort(notlost.begin(),notlost.end());
        vector<vector<int>> ans;
        ans.push_back(notlost);
        ans.push_back(lostone);
        return ans;
    }
};

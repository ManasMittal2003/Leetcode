class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<int> worthy(n+1,-1);
        unordered_map<int,int> trust;
        for(int i=0;i<t.size();i++){
            int first=t[i][0];
            int second=t[i][1];
            worthy[first]=0;
            trust[second]++;
        }
        for(int i=1;i<worthy.size();i++){
            if(worthy[i]==-1&&trust[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};

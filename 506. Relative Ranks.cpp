class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> mp;
        for(int i=0;i<score.size();i++){
            mp[score[i]]=i;
        }
        priority_queue<int> pq;
        for(auto i:score){
            pq.push(i);
        }
        vector<string> ans(score.size());
        int i=1;
        while(!pq.empty()){
            int val=pq.top();
            int idx=mp[val];
            pq.pop();
            if(i<=3){
                if(i==1){
                    ans[idx]="Gold Medal";
                }else if(i==2){
                    ans[idx]="Silver Medal";
                }else{
                    ans[idx]="Bronze Medal";
                }
            }
            else{
                int temp=i;
                ans[idx]=to_string(temp);
            }
            i++;
        }
        return ans;
    }
};

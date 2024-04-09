class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<tickets.size();i++){
            q.push({i,tickets[i]});
        }
        int cnt=0;
        while(!q.empty()){
            int ticket=q.front().second;
            int ind=q.front().first;
            q.pop();
            ticket--;
            cnt++;
            if(ind==k&&ticket==0){
                return cnt;
            }
            else if(ticket!=0){
                q.push({ind,ticket});
            }
        }
        return 0;
    }
};

//O(n) Solution

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                ans+=min(tickets[i],tickets[k]);
            }else{
                ans+=min(tickets[k]-1,tickets[i]);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // queue<pair<int,int>> q;
        // for(int i=0;i<tickets.size();i++){
        //     q.push({i,tickets[i]});
        // }
        // int cnt=0;
        // while(!q.empty()){
        //     int ticket=q.front().second;
        //     int ind=q.front().first;
        //     q.pop();
        //     ticket--;
        //     cnt++;
        //     if(ind==k&&ticket==0){
        //         return cnt;
        //     }
        //     else if(ticket!=0){
        //         q.push({ind,ticket});
        //     }
        // }
        // return 0;

        int i=0;
        int cnt=0;
        while(tickets[k]!=0){
            if(tickets[i]!=0){
                tickets[i]--;
                cnt++;
            }
            i++;
            if(i==tickets.size()){
                i=0;
            }
        }
        return cnt;

        
    }
};

class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> pq;
        int i=0;
        for(;i<h.size()-1;i++){
            if(h[i]>=h[i+1]){
                continue;
            }else if(h[i]<h[i+1]&&b>=(h[i+1]-h[i])){
                pq.push(h[i+1]-h[i]);
                b=b-(h[i+1]-h[i]);
            }else{
                int req=(h[i+1]-h[i]);
                int maxb=-1;
                if(!pq.empty()){
                    maxb=pq.top();
                }
                if(l!=0&&maxb>req){
                    
                    b=b+maxb;
                    b=b-(h[i+1]-h[i]);
                    pq.pop();
                    pq.push(h[i+1]-h[i]);
                    l--;
                    
                }else if(maxb<req&&l!=0){
                    l--;
                }
                else if(l!=0){
                    l--;
                }else{
                    return i;
                }
            }
        }
        return i;
    }
};

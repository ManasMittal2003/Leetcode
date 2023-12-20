class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int fmin=INT_MAX;
        int fmax=INT_MAX;
        int ind;
        int i;
        for(i=0;i<prices.size();i++){
            if(prices[i]<fmin&&prices[i]<money){
                fmin=prices[i];
                ind=i;
            }
        }
        for(int j=0;j<prices.size();j++){
            if(j!=ind){
                if(prices[j]<fmax&&prices[j]<money){
                    fmax=prices[j];
                }
            }
        }
        if(fmin==INT_MAX||fmax==INT_MAX){
            return money;
        }
        if((money-(fmin+fmax))<0){
            return money;
        }
        return money-(fmin+fmax);
    }
};

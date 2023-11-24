class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans=0;
        sort(piles.begin(),piles.end());
        int n=piles.size()-2;
        int f=n/3;
        while(n>=f){
            ans=ans+piles[n];
            n=n-2;
        }
        return ans;
    }
    
};

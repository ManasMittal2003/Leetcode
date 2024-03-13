class Solution {
public:
    int pivotInteger(int n) {
        vector<int> lsum(n+1,0);
        vector<int> rsum(n+1,0);
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+i;
            lsum[i]=sum;
        }
        sum=0;
        for(int i=n;i>=1;i--){
            sum=sum+i;
            rsum[i]=sum;
        }
        for(int i=1;i<=n;i++){
            if(lsum[i]==rsum[i]){
                return i;
            }
        }
        return -1;
    }
};

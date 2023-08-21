class Solution {
public:
    double power(double x,int temp){
        if(temp==0){
            return 1;
        }
        double sp=power(x,temp-1);
        double bp=x*sp;
        return bp;
    }
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        int temp=n;
        if(n<0){
            temp=(-1)*n;
        }
        double ans=power(x,temp);
        if(n<0){
            return 1.0/ans;
        }
        else{
            return ans;
        }
    }
};

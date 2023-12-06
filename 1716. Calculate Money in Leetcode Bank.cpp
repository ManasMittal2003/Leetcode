class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int i=0;
        map<int,int> mapping;
        int sum=0;
        for(int i=1;i<=7;i++){
            sum+=i;
            mapping[i]=sum;
        }
        mapping[0]=0;
        if(n<7){
            return mapping[n];
        }
        while(n>=7){
            i++;
            n=n-7;
        }
        int a=4;
        for(int j=1;j<=i;j++){
            ans=ans+(a*7);
            a++;
        }
        ans=ans+(mapping[n]+(i*n));
        return ans;
    }
};

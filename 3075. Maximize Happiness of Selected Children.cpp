class Solution {
public:
    static bool cmp(int &a,int &b){
        return a>b;
    }
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0,i=0;
        sort(happiness.begin(),happiness.end(),cmp);
        int n=0;
        while(k!=0){
            if(happiness[i]-n>0){
                sum=sum+happiness[i]-n;
            }else{
                sum=sum+0;
            }
            i++;
            n++;
            k--;
        }
        return sum;
    }
};

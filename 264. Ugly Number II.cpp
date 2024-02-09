class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n+1);
        int i2,i3,i5;
        i2=i3=i5=1;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            int first=arr[i2]*2;
            int second=arr[i3]*3;
            int third=arr[i5]*5;
            int mini=min({first,second,third});
            arr[i]=mini;
            if(mini==first){
                i2++;
            }
            if(mini==second){
                i3++;
            }
            if(mini==third){
                i5++;
            }
        }
        return arr[n];
    }
};

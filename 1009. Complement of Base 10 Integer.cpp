class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0,sum=0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            if((n&1)==0){
                sum=sum+pow(2,i);
            }
            i++;
            n=n>>1;
        }
        return sum;
    }
};

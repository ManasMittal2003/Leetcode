class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        int digit=0;
        if(x<0){
            return false;
        }
        while(x){
            if((digit<INT_MIN/10)||(digit>INT_MAX/10))
                return false;
            digit=(digit*10)+(x%10);
            x=x/10;
        }
        if(temp==digit){
            return true;
        }
        else{
            return false;
        }
    }
};

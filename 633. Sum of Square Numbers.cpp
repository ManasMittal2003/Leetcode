class Solution {
public:
    bool judgeSquareSum(int c) {
        int low=0,high=floor(sqrt(c));
        while(low<=high){
            if(low!=0&&low>(c/low)){
                return false;
            }
            if(high!=0&&high>(c/high)){
                high--;
                continue;
            }
            int val=low*low;
            if(val==(c-high*high)){
                return true;
            }
            else if(val<(c-high*high)){
                low++;
            }else{
                high--;
            }
        }
        return false;
    }
};

class Solution {
public:
    int numWaterBottles(int num, int numex) {
        int ans=num;
        int q=num/numex;
        int r=num%numex;
        num=q+r;
        while(num>=numex){
            ans=ans+q;
            q=num/numex;
            r=num%numex;
            num=q+r;
        }
        return ans+q;
    }
};

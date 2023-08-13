class Solution {
public:
    long long int binarysearch(int x){
        int s=1,e=x;
        long long int mid=s+(e-s)/2;
        long long int ans;
        while(s<=e){
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        return binarysearch(x);
    }
};

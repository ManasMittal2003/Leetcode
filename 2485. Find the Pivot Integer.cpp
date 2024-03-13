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
//Binary Search
class Solution {
public:
    int pivotInteger(int n) {
        int low = 1, high = n;
        int totalSum = (n * (n + 1)) / 2;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int currSum = (mid * (mid + 1)) / 2;
            if (totalSum - currSum + mid == currSum)
                return mid;
            else if (currSum < totalSum / 2)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};

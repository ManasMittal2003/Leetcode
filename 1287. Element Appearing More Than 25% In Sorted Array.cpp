class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=0;
        int ans=-1;
        while(i<n){
            if(arr[i]==arr[j]){
                i++;
            }else{
                int freq=i-j;
                if(((freq*100)/n)>=25){
                    ans=arr[j];
                }
                j=i;
            }
        }
        if(i==n){
            int f=i-j;
            if(((f*100)/n)>25){
                return arr[j];
            }
        }
        return ans;
    }
};

class Solution {
public:
    bool ifcheck(vector<int> arr, int k, int m,int mid){
        int cnt=0,numb=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                cnt++;
            }else{
                numb=numb+(cnt/k);
                cnt=0;
            }
        }
        numb=numb+(cnt/k);
        if(numb>=m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<min){
                min=bloomDay[i];
            }
        }
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]>max){
                max=bloomDay[i];
            }
        }
        int low=min,high=max,ans=-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(ifcheck(bloomDay,k,m,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
};

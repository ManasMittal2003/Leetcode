class Solution {
public:
    bool ifcheck(vector<int> piles,int h,int mid){
        long long int hour=0;
        for(int i=0;i<piles.size();i++){
            hour=hour+ceil((double)piles[i]/(double)mid);
        }
        if(hour<=h){
            return true;
        }else{
            return false;
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        int low=1,high=max,ans;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(ifcheck(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
};

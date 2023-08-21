class Solution {
public:
    bool ifcheck(vector<int> &weights, int d,int mid){
    int days=1,sum=0;
    for(int i=0;i<weights.size();i++){
        if(sum+weights[i]>mid){
            days++;
            sum=weights[i];
        }
        else{
            sum=sum+weights[i];
        }
    }
    if(days<=d){
        return true;
    }
    return false;
}
    int shipWithinDays(vector<int>& weights, int d) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++){
            high=high+weights[i];
        }
        int mid=low+(high-low)/2,ans;
        while(low<=high){
            if(ifcheck(weights,d,mid)){
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

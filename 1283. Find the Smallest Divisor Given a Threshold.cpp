class Solution {
public:
    bool ifcheck(vector<int> arr,int limit,int mid){
            int sum=0;
            for(int i=0;i<arr.size();i++){
                double x=(double)arr[i]/(double)mid;
                sum=sum+ceil(x);
            }
            // cout<<sum<<" ";
            if(sum<=limit){
                return true;
            }
            return false;
        }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int low=1,high=max,ans;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(ifcheck(nums,threshold,mid)){
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

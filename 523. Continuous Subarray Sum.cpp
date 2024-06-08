class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            // if(sum%k==0){
            //     return true;
            // }
            if(mp.find(sum%k)!=mp.end()&&(i-mp[sum%k])>1){
                return true;
            }
            else if(mp.find(sum%k)==mp.end()){
                mp[sum%k]=i;
            }
        }
        return false;
    }
};

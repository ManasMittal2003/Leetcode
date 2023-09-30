class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ops=0;
        map<int,int> mp;
        for(int i=1;i<=k;i++){
            mp[i]=i;
        }
        int len=nums.size();
        for(int i=len-1;i>=0;i--){
            if(mp.empty()){
                break;
            }
            if(mp.find(nums[i])!=mp.end()){
                mp.erase(nums[i]);
            }
            ops++;
        }
        return ops;
    }
};

class Solution {
public:
    static int rev(int n){
        int reverse=0;
        for(int i=n;i>0;i=i/10){
            reverse=(reverse*10)+(i%10);
        }
        return reverse;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cnt=0; 
        const int mod=1e9+7;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-rev(nums[i]);
            cnt=(cnt+mp[nums[i]])%mod;
            mp[nums[i]]++;
        }
        return cnt;
    }
};

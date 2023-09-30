class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        map<int,int> mp;
        mp[nums[0]]++;
        for(int i=1;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                count=count+mp[nums[i]];
            }
            mp[nums[i]]++;
        }
        return count;
    }
};

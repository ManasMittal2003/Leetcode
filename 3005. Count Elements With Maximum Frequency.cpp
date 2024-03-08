class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxfreq=INT_MIN;
        for(auto i:mp){
            if(i.second>=maxfreq){
                maxfreq=i.second;
            }
        }
        int cnt=0;
        for(auto i:mp){
            if(i.second==maxfreq){
                cnt+=i.second;
            }
        }
        return cnt;
    }
};

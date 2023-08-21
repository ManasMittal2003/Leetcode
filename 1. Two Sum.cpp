class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int i=0,j=nums.size()-1,a=0;
        map<int,int> mp;
        for(auto i:nums){
            mp[a]=i;
            a++;
        }
        sort(nums.begin(),nums.end());
        while(i<=j){
            if((nums[i]+nums[j])==target){
                for(auto& b:mp){
                    if((b.second==nums[i])||(b.second==nums[j])){
                        res.push_back(b.first);
                    }
                }
                return res;
            }
            else if((nums[i]+nums[j])<target){
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};

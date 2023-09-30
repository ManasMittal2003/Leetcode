//Wrong
class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=0;
        for(auto i:mp){
            if(i.second==1){
                return -1;
            }
            if(i.second%3==0){
                count+=i.second/3;
            }
            else if(i.second%2==0){
                count+=i.second/2;
            }
        }
        return count;
    }
};

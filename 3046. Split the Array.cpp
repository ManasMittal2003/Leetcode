class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mapping;
        int cnt1=0;
        int cnt2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mapping[nums[i]]++;
        }
        for(auto i:mapping){
            if(i.second==2){
                cnt1++;
            }else if(i.second==1){
                cnt2++;
            }
        }
        return ((cnt1*2)+cnt2==n);
    }
};

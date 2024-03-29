class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxele=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxele){
                maxele=nums[i];
            }
        }
        vector<int> store;
        int count=0;
        int i=0;
        long long tcount=0;
        while(i<nums.size()){
            if(nums[i]==maxele){
                store.push_back(i);
            }
            int size=store.size();
            if(size>=k){
                int last=store[size-k];
                tcount+=last+1;
            }
            i++;
        }
        return tcount;
    }
};

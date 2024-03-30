class Solution {
public:
    int solve(vector<int> nums,int k){
        unordered_map<int,int> count;
        int ans=0;
        int i=0,j=0;
        while(j<nums.size()){
            count[nums[j]]++;
            while(count.size()>k){
                count[nums[i]]--;
                if(count[nums[i]]==0){
                    count.erase(nums[i]);
                }
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};

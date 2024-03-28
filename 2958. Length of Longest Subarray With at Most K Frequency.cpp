class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int maxlen=0;
        int i=0,j=0;
        while(j<nums.size()){
            freq[nums[j]]++;
            while(i<j&&freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;

    }
};

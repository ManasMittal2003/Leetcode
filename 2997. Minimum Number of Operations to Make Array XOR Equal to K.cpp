class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int txor=0,ans=0;
        for(int i=0;i<nums.size();i++){
            txor=txor^nums[i];
        }
        txor=txor^k;
        while(txor!=0){
            if((txor&1))
                ans++;
            txor=txor>>1;
        }
        return ans;
    }
};

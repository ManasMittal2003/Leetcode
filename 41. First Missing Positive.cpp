class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool> vis(n+1,false);    
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0&&nums[i]<=n){
                vis[nums[i]]=true;
            }
        }
        for(int i=1;i<vis.size();i++){
            if(vis[i]==false){
                return i;
            }
        }
        return n+1;
    }
};

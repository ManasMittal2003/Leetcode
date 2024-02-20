class Solution {
public:
    void solve(int ind,vector<int> &nums,int &sum,int &x){
        if(ind>=nums.size()){
            sum=sum+x;
            return;
        }
        x=x^nums[ind];
        solve(ind+1,nums,sum,x);
        x=x^nums[ind];
        solve(ind+1,nums,sum,x);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int x=0;
        solve(0,nums,sum,x);
        return sum;
    }
};

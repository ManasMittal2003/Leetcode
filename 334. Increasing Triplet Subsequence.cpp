class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;  // Smallest element seen so far.
        int second = INT_MAX; // Second smallest element seen so far.

        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num;
            } else {
                // If we encounter a number greater than 'second', we have an increasing triplet.
                return true;
            }
        }

        return false;
    }
};
//my code memory limit exceed
/*class Solution {
public:
    void gen(int ind,vector<int> nums,vector<int> &temp,int n,vector<vector<int>> &ans){
        if(ind==n){
            if(temp.size()==3)
            {
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[ind]);
        gen(ind+1,nums,temp,n,ans);
        temp.pop_back();
        gen(ind+1,nums,temp,n,ans);
    }
    bool increasingTriplet(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        gen(0,nums,temp,nums.size(),ans);
        for(auto i:ans){
            if(i[0]<i[1]&&i[1]<i[2]){
                return true;
            }
        }
        return false;
    }
};*/

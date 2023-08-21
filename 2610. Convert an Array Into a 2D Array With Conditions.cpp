class Solution {
public:
    bool check(vector<int> nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=-1){
                return true;
            }
        }
        return false;
    }
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(nums.size()==1){
            temp.push_back(nums[0]);
            ans.push_back(temp);
            return ans;
        }
        temp.push_back(nums[0]);
        nums[0]=-1;
        vector<int>::iterator it;
        while(check(nums)){
            for(int i=1;i<nums.size();i++){
                if(nums[i]!=(-1)){
                    it = find(temp.begin(), temp.end(), nums[i]);
                    if(it==temp.end()){
                        temp.push_back(nums[i]);
                        nums[i]=-1;
                    }
                }
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};

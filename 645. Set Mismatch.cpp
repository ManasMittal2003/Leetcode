class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mapping;
        for(int i=0;i<n;i++){
            mapping[nums[i]]++;
        }
        vector<int> ans;
        for(auto i:mapping){
            if(i.second==2){
                ans.push_back(i.first);
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if(mapping.find(i)==mapping.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};

class Solution {
public:
    bool rearr(vector<int> temp){
        sort(temp.begin(),temp.end());
        if(temp.size()==1){
            return false;
        }
        int diff=temp[1]-temp[0];
        for(int i=2;i<temp.size();i++){
            if((temp[i]-temp[i-1])!=diff){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int i=0;
        while(i<l.size()){
            int left=l[i];
            int right=r[i];
            vector<int> temp;
            while(left<=right){
                temp.push_back(nums[left++]);
            }
            if(rearr(temp)){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
            i++;
        }
        return ans;
    }
};

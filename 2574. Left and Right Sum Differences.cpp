class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> lsum;
        vector<int> rsum;
        int l=0,r=0;
        lsum.push_back(l);
        rsum.push_back(r);
        int i=0,j=nums.size()-1;
        while(i<(nums.size()-1)&&(j>0)){
            l=l+nums[i];
            lsum.push_back(l);
            r=r+nums[j];
            rsum.push_back(r);
            i++;
            j--;
        }
        reverse(rsum.begin(),rsum.end());
        vector<int> ans;
        for(int i=0;i<lsum.size();i++){
            int dif=lsum[i]-rsum[i];
            if(dif<0){
                dif=dif*-1;
                ans.push_back(dif);
            }
            else{
                ans.push_back(dif);
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        vector<int> temp2;
        int max=INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            temp2.push_back(candies[i]+extraCandies);
        }
        for(auto i:temp2){
            if(i>=max){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};

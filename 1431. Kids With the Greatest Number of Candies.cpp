class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> ans(candies.size(),-1);
        int flag=0;
        vector<int>::iterator it;
        for(int i=0;i<candies.size();i++){
            if(ans[i]==-1){
                int flag=0;
                for(int j=0;j<candies.size();j++){
                    if(candies[i]+extraCandies<candies[j]){
                        flag=1;
                        ans[i]=0;
                        break;
                    }
                }
                if(flag==0){
                    ans[i]=1;
                    it=find(candies.begin(),candies.end(),candies[i]);
                    if(it!=candies.end()){
                        ans[it-candies.begin()]=1;
                    }
                }
            }
        }
        vector<bool> ans2;
        for(auto it:ans){
            if(it==1){
                ans2.push_back(true);
            }else{
                ans2.push_back(false);
            }
        }
        return ans2;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        int i=1;
        while(i<=n){
            int dig=i;
            int count=0;
            while(dig!=0){
                if(dig&1){
                    count++;
                }
                dig=dig>>1;
            }
            ans.push_back(count);
            i++;
        }
        return ans;
    }
};

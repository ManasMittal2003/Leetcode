class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> temp;
        vector<string> ans;
        int a=0;
        int i=1;
        while(i<=n){
            if(temp.size()==target.size()){
                break;
            }
            if(i==target[a]){
                temp.push(i);
                ans.push_back("Push");
                a++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            i++;
        }
        return ans;
    }
};

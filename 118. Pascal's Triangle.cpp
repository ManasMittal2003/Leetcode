class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
        temp.clear();
        if(numRows==1){
            return ans;
        }
        temp.push_back(1);
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows==2){
            return ans;
        }
        temp.clear();
        for(int i=2;i<=numRows-1;i++){
            vector<int> temp1=ans[i-1];
            temp.push_back(temp1[0]);
            int sum=temp1[0];
            for(int i=1;i<temp1.size();i++){
                sum=sum+temp1[i];
                temp.push_back(sum);
                sum=temp1[i];
            }
            temp.push_back(sum);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        vector<int> temp={1};
        ans.push_back(temp);
        if(rowIndex==0){
            return ans.back();
        }
        temp.clear();
        temp={1,1};
        ans.push_back(temp);
        if(rowIndex==1){
            return ans.back();
        }
        for(int i=2;i<rowIndex+1;i++){
            temp.clear();
            temp.push_back(1);
            vector<int> temp2=ans.back();
            int presum=temp2[0];
            int currsum=temp2[1];
            for(int j=1;j<=temp2.size()-1;j++){
                temp.push_back(presum+currsum);
                presum=currsum;
                currsum=temp2[j+1];
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans.back();
    }
};

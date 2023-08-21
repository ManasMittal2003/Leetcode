class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        for(int i=0;i<operations.size();i++){
            string temp=operations[i];
            if(temp=="++X"||temp=="X++"){
                sum=sum+1;
            }
            else{
                sum=sum-1;
            }
        }
        return sum;
    }
};

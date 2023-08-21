class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int j=digits.size()-1;
        int carry=0;
        int sum=digits[j]+carry+1;
        res.push_back(sum%10);
        carry=sum/10;
        j--;
        while(j>=0){
            sum=carry+digits[j];
            res.push_back(sum%10);
            carry=sum/10;
            j--;
        }
        while(carry!=0){
            res.push_back(carry%10);
            carry=carry/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

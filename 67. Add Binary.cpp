class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string ans="";
        while(i>=0&&j>=0){
            int num1=stoi(string(1,a[i]));
            int num2=stoi(string(1,b[j]));
            ans.push_back(((carry+num1+num2)%2)+'0');
            carry=(carry+num1+num2)/2;
            i--;
            j--;
        }
        while(i>=0){
            int num1=stoi(string(1,a[i]));
            ans.push_back(((carry+num1)%2)+'0');
            carry=(carry+num1)/2;
            i--;
        }
        while(j>=0){
            int num1=stoi(string(1,b[j]));
            ans.push_back(((carry+num1)%2)+'0');
            carry=(carry+num1)/2;
            j--;
        }
        while(carry>0){
            ans.push_back(((carry)%2)+'0');
            carry=(carry)/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

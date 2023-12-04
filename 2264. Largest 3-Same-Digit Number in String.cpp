class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0,j=2;
        string ans="-1";
        while(j<num.length()){
            if((num[i]==num[i+1])&&(num[i+1]==num[i+2])){
                if(stoi(ans)<stoi(num.substr(i,j-i+1))){
                    ans=num.substr(i,j-i+1);
                }
            }
            i++;
            j++;
        }
        if(ans=="-1"){
            return "";
        }
        return ans;
    }
};

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int k=0;k<words.size();k++){
            string check=words[k];
            int i=0,j=check.length()-1;
            bool flag=false;
            while(i<j){
                if(check[i]!=check[j]){
                    flag=true;
                    break;
                }
                i++;
                j--;
            }
            if(flag==false){
                return check;
            }
        }
        return "";
    }
};

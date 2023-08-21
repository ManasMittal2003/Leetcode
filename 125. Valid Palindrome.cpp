class Solution {
public:
    bool valid(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            return true;
        }
        else{
            return false;
        }
    }
    bool checkvalid(string temp){
        int s=0,e=temp.length()-1;
        while(s<e){
            if(temp[s]!=temp[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
            if(temp[i]>='A'&&temp[i]<='Z'){
                temp[i]=temp[i]+32;
            }
        }
        return checkvalid(temp);
    }
};

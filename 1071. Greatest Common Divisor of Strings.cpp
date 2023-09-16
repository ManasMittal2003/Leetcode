class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        while(str1.length()!=str2.length()){
            if(str1.length()>str2.length()){
                if(str1.find(str2)<str1.length()&&str1.find(str2)==0)
                    str1.erase(str1.find(str2),str2.length());
                else{
                    return "";
                }
            }
            else{
                if(str2.find(str1)<str2.length()&&str2.find(str1)==0)
                    str2.erase(str2.find(str1),str1.length());
                else{
                    return "";
                }
            }
        }
        if(str1!=str2){
            return "";
        }
        return str1;
    }
};

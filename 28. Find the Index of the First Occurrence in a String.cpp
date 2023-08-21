class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            string temp="";
            int k=i;
            for(int j=0;j<needle.length();j++){
                if(k==haystack.length()-1){
                    temp=temp+haystack[k];
                    break;
                }
                temp=temp+haystack[k++];
            }
            if(temp==needle){
                return i;
            }
        }
        return -1;
    }
};

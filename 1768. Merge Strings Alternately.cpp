class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int len1=word1.length();
        int len2=word2.length();
        int i=0,j=0;
        bool flag=false;
        while(i<len1&&j<len2){
            if(flag==false){
                ans=ans+word1[i];
                i++;
                flag=true;
            }else{
                ans=ans+word2[j];
                j++;
                flag=false;
            }
        }
        while(i<len1){
            ans=ans+word1[i++];
        }
        while(j<len2){
            ans=ans+word2[j++];
        }
        return ans;
    }
};

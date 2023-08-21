class Solution {
public:
    bool checkequal(int count[],int count2[]){
        for(int i=0;i<26;i++){
            if(count[i]!=count2[i]){
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int count[26]={0};
        for(int i=0;i<s1.length();i++){
            count[s1[i]-'a']++;
        }
        int i=0;
        int count2[26]={0};
        while(i<s1.length()){
            if(i>=s2.length()){
                return 0;
            }
            count2[s2[i]-'a']++;
            i++;
        }
        if(checkequal(count,count2)){
            return 1;
        }
        while(i<s2.length()){
            count2[s2[i]-'a']++;
            count2[s2[i-s1.length()]-'a']--;
            if(checkequal(count,count2)){
                return 1;
            }
            i++;
        }
        return 0;
    }
};

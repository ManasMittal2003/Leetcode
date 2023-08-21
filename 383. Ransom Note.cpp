class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};
        int count1[26]={0};
        for(int i=0;i<ransomNote.length();i++){
            count[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            count1[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(count[ransomNote[i]-'a']>count1[ransomNote[i]-'a']){
                return false;
            }
        }
        return true;
    }
};

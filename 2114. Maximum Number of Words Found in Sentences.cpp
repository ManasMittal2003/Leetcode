class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=INT_MIN;
        int words=0;
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i].at(j)==' '){
                    words++;
                }
            }
            words++;
            if(max<words){
                max=words;
            }
            words=0;
        }
        return max;
    }
};

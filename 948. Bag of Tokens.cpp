class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if (tokens.size() == 0) {
            return 0;
        }
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int maxscore=0;
        int left=0,right=tokens.size()-1;
        while(left<=right){
            if(tokens[left]<=power){
                score++;
                power-=tokens[left++];
                maxscore=max(maxscore,score);
            }
            else if(score>=1){
                score--;
                power+=tokens[right--];
            }else{
                return maxscore;
            }
        }
        return maxscore;
    }
};

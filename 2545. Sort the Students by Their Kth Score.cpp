class Solution {
public:
    void rearrange(vector<vector<int>>& score,int i,int j){
        swap(score[i],score[j]);
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int max;
        int ind;
        bool flag=false;
        for(int i=0;i<score.size()-1;i++){
            max=score[i][k];
            for(int j=i+1;j<score.size();j++){
                if(max<score[j][k]){
                    max=score[j][k];
                    flag=true;
                    ind=j;
                }
            }
            if(flag==true){
                rearrange(score,i,ind);
            }
            flag=false;
        }
        return score;
    }
};

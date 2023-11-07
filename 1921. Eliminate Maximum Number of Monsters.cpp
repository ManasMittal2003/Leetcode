class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> time;
        int mcount=1;
        for(int i=0;i<dist.size();i++){
            time.push_back((float)dist[i]/speed[i]);
        }
        sort(time.begin(),time.end());
        for(int i=1;i<time.size();i++){
            if(i>=time[i]){
                break;
            }
            mcount++;
        }
        return mcount;
    }
};

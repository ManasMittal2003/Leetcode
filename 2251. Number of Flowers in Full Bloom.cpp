class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        // int maxi=INT_MIN;
        // for(int i=0;i<flowers.size();i++){
        //     if(maxi<(*max_element(flowers[i].begin(),flowers[i].end()))){
        //         maxi=*max_element(flowers[i].begin(),flowers[i].end());
        //     }
        // }
        // vector<int> count(maxi+1,0);
        // for(int i=0;i<flowers.size();i++){
        //     int low=flowers[i][0];
        //     int high=flowers[i][1];
        //     for(int j=low;j<=high;j++){
        //         count[j]++;
        //     }
        // }
        // vector<int> ans;
        // for(int i=0;i<people.size();i++){
        //     if(people[i]>maxi){
        //         ans.push_back(0);
        //     }
        //     else{
        //         ans.push_back(count[people[i]]);
        //     }
        // }
        // return ans;
        vector<int> start, end;
        for (auto& t : flowers)
            start.push_back(t[0]), end.push_back(t[1]);
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        vector<int> res;
        for (int t : people) {
            int started = upper_bound(start.begin(), start.end(), t) - start.begin();
            int ended = lower_bound(end.begin(), end.end(), t) - end.begin();
            res.push_back(started - ended);
        }
        return res;
    }
};

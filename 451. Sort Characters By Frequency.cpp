class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans="";
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto i:mp){
            pq.push(make_pair(i.second,i.first));
        }
        while(!pq.empty()){
            pair<int,char> temp=pq.top();
            pq.pop();
            int freq=temp.first;
            while(freq!=0){
                ans.push_back(temp.second);
                freq--;
            }
        }
        return ans;
    }
};

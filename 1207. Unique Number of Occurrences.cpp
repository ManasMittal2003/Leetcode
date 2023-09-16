class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> temp;
        for(auto i:mp){
            temp.push_back(i.second);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]==temp[i+1]){
                return false;
            }
        }
        return true;
    }
};

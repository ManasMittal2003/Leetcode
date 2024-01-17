class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mapping;
        for(int i=0;i<arr.size();i++){
            mapping[arr[i]]++;
        }
        vector<int> temp;
        for(auto i:mapping){
            auto it=find(temp.begin(),temp.end(),i.second);
            if(it!=temp.end()){
                return false;
            }else{
                temp.push_back(i.second);
            }
        }
        return true;
    }
};

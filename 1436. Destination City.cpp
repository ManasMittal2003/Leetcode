class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> mapping;
        for(auto i:paths){
            mapping[i[0]]=i[1];
        }
        string source=paths[0][0];
        string destination;
        while(mapping.find(source)!=mapping.end()){
            destination=mapping[source];
            source=destination;
        }
        return destination;
    }
};

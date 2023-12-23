class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int> mapping;
        pair<int,int> start=make_pair(0,0);
        mapping[start]++;
        int i=0;
        while(i<path.length()){
            if(path[i]=='N'){
                start.second=(start.second)+1;
            }else if(path[i]=='E'){
                start.first=(start.first)+1;
            }else if(path[i]=='W'){
                start.first=(start.first)-1;
            }else{
                start.second=(start.second)-1;
            }

            if(mapping.find(start)!=mapping.end()){
                return true;
            }
            mapping[start]++;
            i++;
        }
        return false;
    }
};

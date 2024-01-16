class RandomizedSet {
public:
    vector<int> ans;
    unordered_map<int,int> mapping;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mapping.find(val)!=mapping.end()){
            return false;
        }
        ans.push_back(val);
        mapping[val]=ans.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mapping.find(val)==mapping.end()){
            return false;
        }
        int idx=mapping[val];
        int lastelement=ans.back();
        ans.back()=val;
        ans[mapping[val]]=lastelement;
        mapping[lastelement]=idx;
        ans.pop_back();
        mapping.erase(val);
        return true;
    }
    
    int getRandom() {
        int random=rand()%ans.size();
        return ans[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

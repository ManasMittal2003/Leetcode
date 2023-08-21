class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for(int i=0;i<indices.size();i++){
            if(indices[i]!=i){
                int temp=s[indices[i]];
                s[indices[i]]=s[i];
                s[i]=temp;
                swap(indices[i],indices[indices[i]]);
                i--;
            }
        }
        return s;
    }
};

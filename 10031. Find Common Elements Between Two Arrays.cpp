class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mapping1;
        map<int,int> mapping2;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mapping1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mapping2[nums2[i]]++;
        }
        int cnt=0;
        for(auto i:mapping1){
            if(mapping2.find(i.first)!=mapping2.end()){
                cnt+=i.second;
            }
        }
        ans.push_back(cnt);
        cnt=0;
        for(auto i:mapping2){
            if(mapping1.find(i.first)!=mapping1.end()){
                cnt+=i.second;
            }
        }
        ans.push_back(cnt);
        return ans;
    }
};

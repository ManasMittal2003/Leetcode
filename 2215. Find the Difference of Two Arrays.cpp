class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         map<int,int> mp;
         map<int,int> mp1;
         for(int i=0;i<nums1.size();i++){
             mp[nums1[i]]++;
         }
         for(int i=0;i<nums2.size();i++){
             mp1[nums2[i]]++;
         }
         vector<int> temp;
         vector<vector<int>> ans;
         for(auto i:mp){
             if(mp1.find(i.first)==mp1.end()){
                 temp.push_back(i.first);
             }
         }    
         ans.push_back(temp);
         temp.clear();
         for(auto i:mp1){
             if(mp.find(i.first)==mp.end()){
                 temp.push_back(i.first);
             }
         }  
         ans.push_back(temp);
         return ans;       
    }
};

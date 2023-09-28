class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int len1=nums1.size();
        int len2=nums2.size();
        int i=0,j=0;
        while(i<len1&&j<len2){
            if(nums1[i][0]==nums2[j][0]){
                vector<int> temp={nums1[i][0],nums1[i][1]+nums2[j][1]};
                ans.push_back(temp);
                i++;
                j++;
            }else if(nums1[i][0]<nums2[j][0]){
                vector<int> temp={nums1[i][0],nums1[i][1]};
                ans.push_back(temp);
                i++;
            }else{
                vector<int> temp={nums2[j][0],nums2[j][1]};
                ans.push_back(temp);
                j++;
            }
        }
        while(i<len1){
            vector<int> temp={nums1[i][0],nums1[i][1]};
            ans.push_back(temp);
            i++;
        }
        while(j<len2){
            vector<int> temp={nums2[j][0],nums2[j][1]};
            ans.push_back(temp);
            j++;
        }
        return ans;
    }
};

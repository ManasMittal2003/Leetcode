/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(string ans,string temp){
        reverse(temp.begin(),temp.end());
        int i=0,j=0;
        while(i<ans.length()&&j<temp.length()&&ans[i]==temp[j]){
            i++;
            j++;
        }
        if(i==ans.length()&&j!=temp.length()){
            return false;
        }
        if(i!=ans.length()&&j==temp.length()) return true;
        return ans[i]>temp[j];
    }
    void solve(TreeNode *root,string temp,string &ans){
        if(root==NULL){
            return;
        }
        temp.push_back(root->val+'a');
        if(root->left==NULL&&root->right==NULL){
            if(ans.empty()){
                reverse(temp.begin(),temp.end());
                ans=temp;
                return;
            }
            if(check(ans,temp)){
                reverse(temp.begin(),temp.end());
                ans=temp;
                return;
            }
        }
        solve(root->left,temp,ans);
        solve(root->right,temp,ans);
    }
    string smallestFromLeaf(TreeNode* root) {
        string ans,temp="";
        solve(root,temp,ans);
        return ans;
    }
};

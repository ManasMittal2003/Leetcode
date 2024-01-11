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
    int ans=0;
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        allnodes(root,root->val);
        return ans;
        
        
    }
    void solve(TreeNode* root,int rootval,int &val){
        if(!root)
            return;
        val=max(val,abs(root->val-rootval));
        solve(root->left,rootval,val);
        solve(root->right,rootval,val);
    }
    void allnodes(TreeNode* root,int rootval){
        if(!root)
            return;
        int newdiff=0;
        solve(root,root->val,newdiff);
        ans=max(newdiff,ans);
        if(root->left)
            allnodes(root->left,root->left->val);
        if(root->right)
            allnodes(root->right,root->right->val);
    }
};

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
    void solve(TreeNode *root,int &target)
    {
        if(root==NULL){
            return;
        }
        if(root->left==NULL&&root->right==NULL){
            return;
        }
        solve(root->left,target);
        if(root->left&&root->left->left==NULL&&root->left->right==NULL&&root->left->val==target){
            root->left=NULL;
        }
        solve(root->right,target);
        if(root->right&&root->right->left==NULL&&root->right->right==NULL&&root->right->val==target){
            root->right=NULL;
        }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        solve(root,target);
        if(root->left==NULL&&root->right==NULL&&root->val==target){
            return NULL;
        }
        return root;
    }
};

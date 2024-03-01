/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *find(TreeNode *root,TreeNode *p,TreeNode *q){
        if(root==NULL){
            return NULL;
        }
        if(root->val==p->val||root->val==q->val){
            return root;
        }
        TreeNode *leftans=find(root->left,p,q);
        TreeNode *rightans=find(root->right,p,q);
        if(leftans!=NULL&&rightans!=NULL){
            return root;
        }
        if(leftans==NULL&&rightans!=NULL){
            return rightans;
        }
        if(leftans!=NULL&&rightans==NULL){
            return leftans;
        }else{
            return NULL;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return find(root,p,q);
    }
};

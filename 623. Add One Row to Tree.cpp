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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *nroot=new TreeNode (val);
            nroot->left=root;
            return nroot;
        }
        queue<pair<TreeNode *,int>> q;
        q.push({root,1});
        while(!q.empty()){
            TreeNode *node=q.front().first;
            int lvl=q.front().second;
            q.pop();
            if(lvl==depth-1){
                TreeNode *temp1=new TreeNode(val);
                TreeNode *temp2=new TreeNode(val);
                temp1->left=node->left;
                temp1->right=NULL;
                temp2->right=node->right;
                temp2->left=NULL;
                node->left=temp1;
                node->right=temp2;
            }
            if(lvl>depth){
                break;
            }
            if(node->left) q.push({node->left,lvl+1});
            if(node->right) q.push({node->right,lvl+1});
        }
        return root;
    }
};

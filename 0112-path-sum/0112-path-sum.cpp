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
    bool solve(TreeNode *root,int sum,int &target){
        if(root==NULL){
            return false;
        }
        if(root->left==NULL&&root->right==NULL){
            if(sum+root->val==target){
                return true;
            }
            return false;
        }
        bool left = solve(root->left,sum+root->val,target);
        if(left){
            return true;
        }
        bool right = solve(root->right,sum+root->val,target);
        if(right){
            return true;
        }
        return left||right;
    }
    bool hasPathSum(TreeNode* root, int target) {
        return solve(root,0,target);
    }
};
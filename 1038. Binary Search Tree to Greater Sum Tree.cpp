/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, int& maxsum) {
        if (root == NULL) {
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            root->val = root->val + maxsum;
            maxsum = root->val;
            return;
        }
        solve(root->right, maxsum);
        root->val = root->val + maxsum;
        maxsum = root->val;
        solve(root->left, maxsum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int maxsum = 0;
        solve(root, maxsum);
        return root;
    }
};

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
    void solve(TreeNode *root,long long dig,int &sum){
        if(root==NULL){
            return;
        }
        dig=dig*10+root->val;
        if(root->left==NULL&&root->right==NULL){
            sum+=dig;
        }
        solve(root->left,dig,sum);
        solve(root->right,dig,sum);
    }
    int sumNumbers(TreeNode* root) {
        long long dig=0;
        int sum=0;
        solve(root,dig,sum);
        return sum;
    }
};

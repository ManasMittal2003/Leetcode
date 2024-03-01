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
void countright(TreeNode *root,int &cnt,int maxval){
        if(root==NULL){
            return;
        }
        if(root->val>=maxval){
            maxval=root->val;
            cnt++;
        }
        countright(root->left,cnt,maxval);
        countright(root->right,cnt,maxval);
    }
    void countleft(TreeNode *root,int &cnt,int maxval){
        if(root==NULL){
            return;
        }
        if(root->val>=maxval){
            maxval=root->val;
            cnt++;
        }
        countleft(root->left,cnt,maxval);
        countleft(root->right,cnt,maxval);
    }
    int goodNodes(TreeNode* root) {
        int cnt=1;
        countleft(root->left,cnt,root->val);
        countright(root->right,cnt,root->val);
        return cnt;
    }
};

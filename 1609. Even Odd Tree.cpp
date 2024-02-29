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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> bfs;
        bool lvl=true;
        bfs.push(root);
        int prev;
        while(!bfs.empty()){
            int n=bfs.size();
            if(lvl){
                prev=INT_MIN;
            }else{
                prev=INT_MAX;
            }
            while(n!=0){
                TreeNode* current=bfs.front();
                bfs.pop();
                if(lvl&&(current->val%2==0||current->val<=prev)){
                    return false;
                }else if(!lvl&&((current->val%2)!=0||current->val>=prev)){
                    return false;
                }
                if(current->left) bfs.push(current->left);
                if(current->right) bfs.push(current->right);
                prev=current->val;
                n--;
            }
            lvl=!lvl;
        }
        return true;
    }
};

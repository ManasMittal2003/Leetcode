//BFS
        // queue<pair<TreeNode *,int>> q;
        // pair<TreeNode *,int> ans;
        // q.push(make_pair(root,0));
        // ans=make_pair(root,0);
        // while(!q.empty()){
        //     pair<TreeNode *,int> temp=q.front();
        //     int lvl=temp.second;
        //     TreeNode *node=temp.first;
        //     q.pop();
        //     if(node->left==NULL&&node->right==NULL){
        //         if(temp.second>ans.second){
        //             ans.first=node;
        //             ans.second=temp.second;
        //         }
        //     }
        //     if(node->left) q.push(make_pair(node->left,lvl+1));
        //     if(node->right) q.push(make_pair(node->right,lvl+1));
        // }
        // return (ans.first)->val;
//DFS
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
    void dfs(TreeNode *root,int lvl,pair<int,int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL&&root->right==NULL){
            if(lvl>ans.second){
                ans.first=root->val;
                ans.second=lvl;
            }
        }
        dfs(root->left,lvl+1,ans);
        dfs(root->right,lvl+1,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        pair<int,int> ans=make_pair(root->val,0);
        dfs(root,0,ans);
        return ans.first;
    }
};

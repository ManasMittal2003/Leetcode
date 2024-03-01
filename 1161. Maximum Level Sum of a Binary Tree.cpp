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
    int maxLevelSum(TreeNode* root) {
        queue<pair<TreeNode *,int>> q;
        q.push(make_pair(root,1));
        pair<int,int> ans=make_pair(INT_MIN,0);
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            int currlvl=q.front().second;
            while(n!=0){
                pair<TreeNode *,int> temp=q.front();
                TreeNode *current=temp.first;
                q.pop();
                sum+=current->val;
                n--;
                if(current->left) q.push({current->left,currlvl+1});
                if(current->right) q.push({current->right,currlvl+1});
            }
            if(sum>ans.first){
                ans.first=sum;
                ans.second=currlvl;
            }
        }
        return ans.second;
    }
};

//First Approach: DFS

class Solution {
public:
    void solve(TreeNode *root,int &sum){
        if(root==NULL){
            return;
        }
        if(root->left){
            if(root->left->left==NULL&&root->left->right==NULL){
                sum+=root->left->val;
            }
        }
        solve(root->left,sum);
        solve(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        solve(root,sum);
        return sum;
    }
};

//Second Approach: Using Queue

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            TreeNode *temp=q.front();
            q.pop();
            if(temp->left){
                if(temp->left->left==NULL&&temp->left->right==NULL){
                    sum+=temp->left->val;
                }
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        return sum;
    }
};

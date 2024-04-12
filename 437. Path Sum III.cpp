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
    void solve(TreeNode *root,int &target,long long sum,int &cnt,unordered_map<long long,int> &mp){
        if(root==NULL){
            return;
        }
        sum+=root->val;
        if(mp.find(sum-target)!=mp.end()){
            cnt+=mp[sum-target];
        }
        mp[sum]++;
        solve(root->right,target,sum,cnt,mp);
        solve(root->left,target,sum,cnt,mp);
        mp[sum]--;
    }
    int pathSum(TreeNode* root, int target) {
        unordered_map<long long,int> mapping;
        mapping[0]=1;
        int cnt=0;
        long long sum=0;
        solve(root,target,sum,cnt,mapping);
        return cnt;
    }
};

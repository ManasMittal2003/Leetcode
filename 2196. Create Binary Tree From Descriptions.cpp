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
    TreeNode* solve(int root, unordered_map<int, pair<int, int>>& mp) {
        if (root == 0) {
            return NULL;
        }
        TreeNode* temproot = new TreeNode(root);
        temproot->left = solve(mp[root].first, mp);
        temproot->right = solve(mp[root].second, mp);
        return temproot;
    }
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, pair<int, int>> mp;
        unordered_map<int, int> store;
        for (int i = 0; i < descriptions.size(); i++) {
            int parent = descriptions[i][0];
            int child = descriptions[i][1];
            store[child]++;
            if (descriptions[i][2] == 1) {
                mp[parent].first = child;
            } else {
                mp[parent].second = child;
            }
        }
        for (auto i : mp) {
            cout << i.second.first << " " << i.second.second << endl;
        }
        int root;
        for (int i = 0; i < descriptions.size(); i++) {
            if (store[descriptions[i][0]] == 0) {
                root = descriptions[i][0];
                break;
            }
        }
        return solve(root, mp);
    }
};

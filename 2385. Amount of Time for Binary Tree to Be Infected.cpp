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
const unsigned long long N = 1e5 + 5;
class Solution {
public:
    vector<int> adj[N];
    bool vis[N];
    int level[N];
    void treeToGraph(TreeNode* node)
    {
        if (node->left) {
            adj[node->val].push_back(node->left->val);
            adj[node->left->val].push_back(node->val);
            treeToGraph(node->left);
        }
        if (node->right) {
            adj[node->val].push_back(node->right->val);
            adj[node->right->val].push_back(node->val);
            treeToGraph(node->right);
        }
    }
    int BFS(int s)
    {
        queue<int> q;
        vis[s] = 1;
        q.push(s);
        level[s] = 0;
        int inf = 0;

        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            bool flag = false;

            for (auto u : adj[v]) {
                if (!vis[u]) {
                    vis[u] = 1;
                    q.push(u);
                    level[u] = level[v]+1;
                    inf = max(inf, level[u]);
                }
            }
        }

        return inf;

    }
    int amountOfTime(TreeNode* root, int start) {
        treeToGraph(root);
        return BFS(start);
    }
};

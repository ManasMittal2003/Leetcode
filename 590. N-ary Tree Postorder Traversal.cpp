/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(Node* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }
        if (root->children.empty()) {
            ans.push_back(root->val);
            return;
        }
        int i = 0;
        int size = root->children.size();
        while (i < size) {
            solve(root->children[i], ans);
            i++;
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};

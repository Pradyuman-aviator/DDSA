#include<bits/stdc++.h>
using namespace std;
// TreeNode definition
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};
class Solution {
public:
    vector<vector<int>> levelorder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL) return ans; // FIXED
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);

                level.push_back(node->val);
            }

            ans.push_back(level); // FIXED
        }

        return ans;
    }
};

int main() {
    // build tree:
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    Solution obj;
    vector<vector<int>> res = obj.levelorder(root);

    for (auto level : res) {
        for (auto x : level) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
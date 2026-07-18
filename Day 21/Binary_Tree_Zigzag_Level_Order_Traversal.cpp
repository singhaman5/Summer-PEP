// Leetcode - 103

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    void solve(TreeNode* root, int level, vector<vector<int>>& ans) {

        if (root == NULL) return;

        if (level == ans.size()) {
            ans.push_back({});
        }

        if (level % 2 == 0) {
            ans[level].push_back(root->val);
        }
        else {
            ans[level].insert(ans[level].begin(), root->val);
        }

        solve(root->left, level + 1, ans);

        solve(root->right, level + 1, ans);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        solve(root, 0, ans);

        return ans;
    }
};

int main() {

    /*
              1
             / \
            2   3
           / \   \
          4   5   6

        Output:
        1
        3 2
        4 5 6
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    Solution obj;

    vector<vector<int>> result = obj.zigzagLevelOrder(root);

    cout << "Zigzag Level Order Traversal:" << endl;

    for (auto level : result) {
        for (auto node : level) {
            cout << node << " ";
        }
        cout << endl;
    }
}
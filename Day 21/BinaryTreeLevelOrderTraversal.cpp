// Leetcode - 102

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
    int levels(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }

        return 1 + max(levels(root->left), levels(root->right));
    }

    void lorder(TreeNode* root, vector<vector<int>>& ans, int level) {

        if (root == NULL) {
            return;
        }

        ans[level].push_back(root->val);

        lorder(root->left, ans, level + 1);
        lorder(root->right, ans, level + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {

        int n = levels(root);

        vector<vector<int>> ans(n);

        lorder(root, ans, 0);

        return ans;
    }
};

int main() {

    /*
              1
             / \
            2   3
           / \
          4   5

        Level Order:
        [ [1],
          [2,3],
          [4,5] ]
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    vector<vector<int>> result = obj.levelOrder(root);

    cout << "Level Order Traversal:" << endl;

    for (auto level : result) {
        for (auto node : level) {
            cout << node << " ";
        }
        cout << endl;
    }
}
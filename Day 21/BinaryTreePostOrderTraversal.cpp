// Leetcode - 145

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
    void postorder(TreeNode* root, vector<int>& ans) {

        if (root == NULL) {
            return;
        }

        postorder(root->left, ans);

        postorder(root->right, ans);

        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> ans;

        postorder(root, ans);

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

        Postorder: 4 5 2 3 1
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    vector<int> result = obj.postorderTraversal(root);

    cout << "Postorder Traversal: ";

    for (int val : result) {
        cout << val << " ";
    }
}
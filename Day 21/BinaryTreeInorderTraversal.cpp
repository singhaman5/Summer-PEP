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
    void inorder(TreeNode* root, vector<int>& ans) {

        if (root == NULL) {
            return;
        }

        inorder(root->left, ans);

        ans.push_back(root->val);

        inorder(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        inorder(root, ans);

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

        Inorder: 4 2 5 1 3
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    vector<int> result = obj.inorderTraversal(root);

    cout << "Inorder Traversal: ";

    for (int val : result) {
        cout << val << " ";
    }
}
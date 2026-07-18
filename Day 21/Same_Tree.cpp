// Leetcode - 100

#include <iostream>
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;

        if (p == NULL || q == NULL) return false;

        if (p->val != q->val) return false;

        bool leftAns = isSameTree(p->left, q->left);
        bool rightAns = isSameTree(p->right, q->right);

        return leftAns && rightAns;
    }
};

int main() {
    // Tree 1
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    // Tree 2
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    Solution obj;
    if (obj.isSameTree(p, q)) {
        cout << "Same Tree" << endl;
    } 
    else {
        cout << "Different Tree" << endl;
    }
}
// Leetcode - 110

#include<iostream>
#include<algorithm>
using namespace std;

class TreeNode{

public:

    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){

        val = x;
        left = NULL;
        right = NULL;
    }
};

int check(TreeNode* root){

    if(root == NULL)
        return 0;

    int left = check(root->left);
    int right = check(root->right);

    if(left == -1 || right == -1)
        return -1;

    if(abs(left - right) > 1)
        return -1;

    return 1 + max(left, right);
}

bool isBalanced(TreeNode* root){

    return check(root) != -1;
}

int main(){

    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    if(isBalanced(root)) cout << "Balanced Tree";
    else cout << "Not Balanced Tree";
}
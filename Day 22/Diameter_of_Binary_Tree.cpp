// Leetcode - 543

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

int find(TreeNode* root, int &dia){

    if(root == NULL)
        return 0;

    int left = find(root->left, dia);
    int right = find(root->right, dia);

    dia = max(dia, left + right);

    return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root){

    int dia = 0;

    find(root, dia);

    return dia;
}

int main(){

    /*
             1
            / \
           2   3
          / \
         4   5

    Diameter = 3
    Path: 4 -> 2 -> 1 -> 3
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter = " << diameterOfBinaryTree(root);
}
// Leetcode - 108

#include<iostream>
#include<vector>
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

TreeNode* helper(vector<int>& arr, int lo, int hi){

    if(lo > hi)
        return NULL;

    int mid = lo + (hi - lo) / 2;

    TreeNode* root = new TreeNode(arr[mid]);

    root->left = helper(arr, lo, mid - 1);
    root->right = helper(arr, mid + 1, hi);

    return root;
}

TreeNode* sortedArrayToBST(vector<int>& arr){

    return helper(arr, 0, arr.size() - 1);
}

void inorder(TreeNode* root){

    if(root == NULL)
        return;

    inorder(root->left);

    cout << root->val << " ";

    inorder(root->right);
}

int main(){

    vector<int> arr = {-10, -3, 0, 5, 9};

    TreeNode* root = sortedArrayToBST(arr);

    cout << "Inorder Traversal: ";

    inorder(root);
}
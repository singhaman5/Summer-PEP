// Leetocode - 199

#include<iostream>
#include<vector>
#include<queue>
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

vector<int> rightSideView(TreeNode* root){

    vector<int> ans;

    if(root == NULL)
        return ans;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){

        int size = q.size();

        for(int i = 0; i < size; i++){

            TreeNode* node = q.front();
            q.pop();

            if(i == size - 1)
                ans.push_back(node->val);

            if(node->left != NULL)
                q.push(node->left);

            if(node->right != NULL)
                q.push(node->right);
        }
    }

    return ans;
}

int main(){

    /*
            1
           / \
          2   3
           \   \
            5   4

    Right Side View = 1 3 4
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    vector<int> ans = rightSideView(root);

    for(int x : ans)
        cout << x << " ";

}
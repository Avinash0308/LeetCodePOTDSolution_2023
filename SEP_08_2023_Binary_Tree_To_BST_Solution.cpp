#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void in(Node* root, vector<int> &inorder){
        if(!root) return;
        in(root->left,inorder);
        inorder.push_back(root->data);
        in(root->right,inorder);
    }
    void fill(Node* root, int &ind, vector<int> &inorder){
        if(!root) return;
        fill(root->left,ind,inorder);
        root->data = inorder[ind];
        ind++;
        fill(root->right,ind,inorder);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> inorder;
        in(root,inorder);
        sort(inorder.begin(),inorder.end());
        int ind = 0;
        fill(root,ind,inorder);
        return root;
    }
};
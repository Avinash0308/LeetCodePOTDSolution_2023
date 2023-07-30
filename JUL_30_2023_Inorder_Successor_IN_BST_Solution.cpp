#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * OrderSuccessor(Node *root, Node *x, Node* &prev)
    {
        //Your code hei
        if(!root) return NULL;
        Node* a = OrderSuccessor(root->left,x,prev);
        if(a) return a;
        if(prev == x) return root;
        prev = root;
        Node* b = OrderSuccessor(root->right,x,prev);
        if(b) return b;
        return NULL;
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code hei
        if(!root) return NULL;
        Node* prev = NULL;
        return OrderSuccessor(root,x,prev);
    }
};
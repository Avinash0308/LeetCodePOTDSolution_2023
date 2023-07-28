#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right, *left;
};
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            if(n1 > n2) swap(n1,n2);
            if(root->data == n1 || root->data == n2) return root;
            if(root->data > n1 && root->data < n2) return root;
            if(root->data > n2) return LCA(root->left,n1,n2);
            else return LCA(root->right,n1,n2);
        }

};
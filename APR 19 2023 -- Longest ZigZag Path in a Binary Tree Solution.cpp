/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include<bits/stdc++.h>
class Solution {
public:
    void solve(TreeNode * root , int & maxy , int count, int move){
        if(root == NULL){
            maxy = max(maxy,count-1);
            return;
        }
        else if(move == 0) {
            solve(root->left,maxy,count+1,1);
            solve(root->right,maxy,1,0);
        }
        else{
            solve(root->right,maxy,count+1,0);
            solve(root->left,maxy,1,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        int maxy = -1;
        solve(root,maxy,0,0);
        return maxy;
    }
};

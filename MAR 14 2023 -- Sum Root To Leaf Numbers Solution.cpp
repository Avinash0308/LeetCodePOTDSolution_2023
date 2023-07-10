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
class Solution {
public:
    void solve(int val , TreeNode * left , TreeNode * right,int &total){
        if(!left && !right){
            total += val;
            return;
        }
        if(left){
            solve(val*10 + left->val,left->left,left->right,total);
        }
        if(right){
            solve(val*10 + right->val,right->left,right->right,total);
        }
    }
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        int total = 0;
        solve(root->val,root->left,root->right,total);
        return total;
    }
};

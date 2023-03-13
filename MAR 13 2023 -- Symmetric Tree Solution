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
    bool solve(TreeNode * left , TreeNode * right){
        if(!left && !right) return true;
        else if(left && !right || !left && right) return false;
        else{
            if(left->val != right->val) return false;
            else{
                if(solve(left->left,right->right) && solve(left->right,right->left)){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return solve(root->left,root->right);
    }
};

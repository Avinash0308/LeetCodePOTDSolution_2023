class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        TreeNode * x = root->left;
        root->left = root->right;
        root->right = x;
        return root;
    }
};

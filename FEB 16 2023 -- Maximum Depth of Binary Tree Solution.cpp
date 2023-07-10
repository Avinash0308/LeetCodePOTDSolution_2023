class Solution {
public:
    int depth = 0;
    void traverse(TreeNode* h,int d){
        if(h != NULL){
            d++;
            depth = max(depth,d);
            traverse(h->left,d);
            traverse(h->right,d);
        }
    }
    int maxDepth(TreeNode* root) {
        traverse(root,0);
        return depth;
    }
};

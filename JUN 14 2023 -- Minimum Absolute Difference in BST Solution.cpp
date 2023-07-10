class Solution {
public:
    void solve(TreeNode* h, int &mini, int &prev1){
        if(!h) return;
        solve(h->left,mini,prev1);
        if(prev1 != -1)mini = min(mini,abs(h->val-prev1));
        prev1 = h->val;
        solve(h->right,mini,prev1);
    }
    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX;
        int prev = -1;
        solve(root,mini,prev);
        return mini;
    }
};

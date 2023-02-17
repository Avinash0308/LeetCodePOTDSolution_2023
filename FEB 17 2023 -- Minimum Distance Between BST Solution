class Solution {
public:
    void solve(TreeNode* h , int & prev, int & ans){
        if(h){
            solve(h->left,prev,ans);
            ans = min(ans,abs(h->val-prev));
            prev = h->val;
            solve(h->right,prev,ans);
        }
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX , prev = INT_MAX;
        solve(root,prev,ans);
        return ans;
    }
};

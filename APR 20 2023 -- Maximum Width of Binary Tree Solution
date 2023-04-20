class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long int>> q;
        if(!root) return 0;
        int maxy = 0;
        q.push({root,0});
        while(!q.empty()){
            int n = q.size();
            int len = q.back().second - q.front().second + 1;
            maxy = max(maxy,len);
            for(int i = 0; i<n; i++){
                pair<TreeNode *,int> p = q.front();
                q.pop();
                long long int ind = p.second;
                if(p.first->left) q.push({p.first->left,2*ind + 1});
                if(p.first->right) q.push({p.first->right, 2*(ind+1)});
            }
        }
        return maxy;
    }
};

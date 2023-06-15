class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxy = INT_MIN;
        int lvl = -1;
        int cur_lvl = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sum = 0;
            int n = q.size();
            for(int i = 0; i<n; i++){
                TreeNode* cur_node = q.front();
                q.pop();
                sum += cur_node->val;
                if(cur_node->left) q.push(cur_node->left);
                if(cur_node->right) q.push(cur_node->right);
            }
            if(sum > maxy){
                maxy = sum;
                lvl = cur_lvl;
            }
            cur_lvl++;
        }
        return lvl;
    }
};

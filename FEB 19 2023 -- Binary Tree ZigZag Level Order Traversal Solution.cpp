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
    void traverse(vector<TreeNode*> &q , vector<vector<int>> &v , int level, int p){
        if(q.size()-p){
           int n = q.size();
           vector<int> x;
           for(int i = n-1; i>=p; i--){
               x.push_back(q[i]->val);
               if(level%2 == 0){
                   if(q[i]->left) q.push_back(q[i]->left);
                   if(q[i]->right) q.push_back(q[i]->right);
               }
               else{
                   if(q[i]->right) q.push_back(q[i]->right);
                   if(q[i]->left) q.push_back(q[i]->left);
               }
           }
           v.push_back(x);
           traverse(q,v,level+1,n);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        vector<TreeNode*> q;
        if(root)q.push_back(root);
        traverse(q,v,0,0);
        return v;
    }
};

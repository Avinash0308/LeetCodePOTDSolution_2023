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
    map<vector<int>,pair<TreeNode*,int>> m;
    vector<int> traverse(TreeNode* h){
        if(h != NULL){
            vector<int> ans;
            ans.push_back(h->val);
            vector<int> first = traverse(h->left);
            vector<int> second = traverse(h->right);
            for(int i =0; i<first.size(); i++){
                ans.push_back(first[i]);
            }
            for(int i =0; i<second.size(); i++){
                ans.push_back(second[i]);
            }
            m[ans].second++;
            m[ans].first = h;
            return ans;
        }
        else{
            return {INT_MIN};
        }
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<int> ans = traverse(root);
        vector<TreeNode*> a;
        for(auto it:m){
            if(it.second.second > 1){
                a.push_back(it.second.first);
            }
        }
        return a;
    }
};

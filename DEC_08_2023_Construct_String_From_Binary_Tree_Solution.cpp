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
    string tree2str(TreeNode* root) {
        if(!root) return "";
        string cur;
        int val = root->val;
        if(val == 0) cur.push_back('0');
        else{
            if(root->val<0){
                val*=-1;
            }
            while(val){
                cur.push_back(char(val%10 + 48));
                val/=10;
            }
            if(root->val < 0){
                cur.push_back('-');
            }
            reverse(cur.begin(),cur.end());
        }
        string left = tree2str(root->left);
        string right = tree2str(root->right);
        if(!left.size() && !right.size()) return cur;
        if(!left.size()){
            cur += "()";
        }
        if(left.size()){
            cur.push_back('(');
            cur += left;
            cur.push_back(')');
        }
        if(right.size()){
            cur.push_back('(');
            cur += right;
            cur.push_back(')');
        }
        return cur;
    }
};

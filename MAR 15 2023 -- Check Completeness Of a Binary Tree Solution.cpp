class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        vector<TreeNode*>v ;
        int i =0;
        v.push_back(root);
        while(i<v.size() && v[i]){
            v.push_back(v[i]->left);
            v.push_back(v[i]->right);
            i++;
        }
        while(i<v.size() && !v[i]){
            i++;
        }
        return i == v.size();
    }
};

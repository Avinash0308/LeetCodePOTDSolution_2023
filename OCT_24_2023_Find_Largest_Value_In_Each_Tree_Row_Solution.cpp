#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> largestValues(TreeNode* h) {
        if(!h) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(h);
        while(!q.empty()){
            int maxy = INT_MIN;
            int n = q.size();
            while(n--){
                TreeNode* root = q.front();
                q.pop();
                maxy = max(maxy,root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            ans.push_back(maxy);
        }
        return ans;
    }
};
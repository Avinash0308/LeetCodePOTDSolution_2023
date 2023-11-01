#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    unordered_map<int, int> m;
    int maxy = 0;
    vector<int> ans;

public:
    void traverse(TreeNode *root)
    {
        if (!root)
            return;
        m[root->val]++;
        if (m[root->val] > maxy)
        {
            maxy = m[root->val];
            ans.resize(0);
            ans.push_back(root->val);
        }
        else if (m[root->val] == maxy)
        {
            ans.push_back(root->val);
        }
        traverse(root->left);
        traverse(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        traverse(root);
        return ans;
    }
};
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
    int ans = 0;

public:
    pair<int, int> traverse(TreeNode *root)
    {
        if (!root)
            return {0, 0};
        pair<int, int> a = traverse(root->left);
        pair<int, int> b = traverse(root->right);
        if (root->val == ((root->val + a.first + b.first) / (1 + a.second + b.second)))
            ans++;
        return {root->val + a.first + b.first, 1 + a.second + b.second};
    }
    int averageOfSubtree(TreeNode *root)
    {
        traverse(root);
        return ans;
    }
};
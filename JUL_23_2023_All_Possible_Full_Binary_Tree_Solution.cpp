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
public:
    vector<TreeNode *> solve(int n, vector<vector<TreeNode *>> &dp)
    {
        if (n % 2 == 0)
            return {};
        if (!dp[n].empty())
            return dp[n];
        if (n == 1)
            return dp[1] = {new TreeNode(0)};
        vector<TreeNode *> res;
        for (int i = 1; i < n; i++)
        {
            vector<TreeNode *> left = solve(i, dp);
            vector<TreeNode *> right = solve(n - i - 1, dp);
            for (auto l : left)
            {
                for (auto r : right)
                {
                    TreeNode *cur = new TreeNode(0);
                    cur->right = r;
                    cur->left = l;
                    res.push_back(cur);
                }
            }
        }
        return dp[n] = res;
    }
    vector<TreeNode *> allPossibleFBT(int n)
    {
        vector<vector<TreeNode *>> dp(n + 1);
        return solve(n, dp);
    }
};
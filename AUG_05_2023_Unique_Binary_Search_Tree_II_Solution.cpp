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
    void solve(map<pair<int, int>, vector<TreeNode *>> &m, int start, int end)
    {
        if (m.count({start, end}) != 0)
            return;
        if (start > end)
        {
            m[{start, end}].push_back(NULL);
            return;
        }
        vector<TreeNode *> v;
        for (int i = start; i <= end; i++)
        {
            solve(m, start, i - 1);
            solve(m, i + 1, end);
            for (auto it : m[{start, i - 1}])
            {
                for (auto xt : m[{i + 1, end}])
                {
                    TreeNode *cur = new TreeNode(i);
                    cur->left = it;
                    cur->right = xt;
                    v.push_back(cur);
                }
            }
        }
        m[{start, end}] = v;
    }
    vector<TreeNode *> generateTrees(int n)
    {
        map<pair<int, int>, vector<TreeNode *>> m;
        solve(m, 1, n);
        return m[{1, n}];
    }
};
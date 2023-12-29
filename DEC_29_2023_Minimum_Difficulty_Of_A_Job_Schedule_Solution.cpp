#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(vector<int> &v, int ind, int day, vector<vector<int>> &dp, int d, int n)
    {
        if (ind == n && day == d)
            return 0;
        else if (ind >= n || day >= d)
            return INT_MAX;
        if (dp[ind][day] != -1)
            return dp[ind][day];
        int maxy = 0, miny = INT_MAX;
        int ans = INT_MAX;
        for (int i = ind; i < n; i++)
        {
            maxy = max(maxy, v[i]);
            miny = min(miny, solve(v, i + 1, day + 1, dp, d, n));
            if (miny != INT_MAX)
            {
                ans = min(ans, maxy + miny);
            }
        }
        return dp[ind][day] = ans;
    }
    int minDifficulty(vector<int> &jobDifficulty, int d)
    {
        int n = jobDifficulty.size();
        vector<vector<int>> dp(n, vector<int>(d, -1));
        int ans = solve(jobDifficulty, 0, 0, dp, d, n);
        return (ans == INT_MAX) ? -1 : ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &dp, vector<int> &v, int i, int j){
        if(j<i) return 0;
        if(dp[i][j] != INT_MIN) return dp[i][j];
        int left = v[i] - solve(dp,v,i+1,j);
        int right = v[j] - solve(dp,v,i,j-1);
        dp[i][j] = max(left,right);
        return dp[i][j];
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int> (n,INT_MIN));
        return solve(dp,nums,0,n-1)>=0;
    }
};
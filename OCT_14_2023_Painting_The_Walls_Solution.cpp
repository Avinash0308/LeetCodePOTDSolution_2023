#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int> &cost, vector<int> &time, int n, int ind, int req, vector<vector<int>> &dp){
        if(req <= 0) return 0;
        if(ind == n) return 1e9;
        if(dp[ind][req] != -1) return dp[ind][req];
        int val1 = solve(cost,time,n,ind+1,req,dp);
        int val2 = cost[ind] + solve(cost,time,n,ind+1,req-1-time[ind],dp);
        return dp[ind][req] = min(val1,val2); 
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return dp[0][n] = solve(cost,time,n,0,n,dp);
    }
};
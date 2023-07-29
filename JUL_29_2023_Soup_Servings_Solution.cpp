#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double solve(unordered_map<int,unordered_map<int,double>> &dp, int n, int x){
        if(dp.find(n) != dp.end() && dp[n].find(x) != dp[n].end()) return dp[n][x];
        if(n == 0 && x == 0) return dp[n][x] = 0.5;
        if(n == 0) return dp[n][x] = 1;
        if(x == 0) return dp[n][x] = 0;
        double val = solve(dp,max(n-100,0),x) + solve(dp,max(n-75,0),max(x-25,0)) + solve(dp,max(n-50,0),max(x-50,0)) + solve(dp,max(n-25,0),max(x-75,0));
        return dp[n][x] = val/4;
    }
    double soupServings(int n) {
        if(n>4451) return 1.0;
        unordered_map<int,unordered_map<int,double>> dp;
        return solve(dp,n,n);
    }
};
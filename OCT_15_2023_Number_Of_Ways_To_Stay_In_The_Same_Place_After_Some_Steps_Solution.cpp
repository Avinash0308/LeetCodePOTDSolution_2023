#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mod = 1e9+7;
    long long int solve(int ind, int n, int step, map<pair<int,int>,int> &dp){
        if(ind < 0 || ind >= n) return 0;
        if(dp.find({ind,step}) != dp.end()) return dp[{ind,step}];
        if(step == 0 && ind == 0) return dp[{ind,step}] = 1;
        if(step == 0 && ind != 0) return dp[{ind,step}] = 0;
        long long int ans = 0;
        ans = (ans + solve(ind-1,n,step-1,dp))%mod;
        ans = (ans + solve(ind+1,n,step-1,dp))%mod;
        ans = (ans + solve(ind,n,step-1,dp))%mod;
        return dp[{ind,step}] = ans;
    }
    int numWays(int steps, int arrLen) {
        map<pair<int,int>,int> dp;
        return solve(0,arrLen,steps,dp);
    }
};
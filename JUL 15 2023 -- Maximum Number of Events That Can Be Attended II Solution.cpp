#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<vector<int>> &events, int ind, int k, int n, int end, vector<vector<int>> &dp){
        if(k == 0 || ind == n) return 0;
        int val1 = solve(events,ind+1,k,n,end,dp);
        int val2 = 0;
        if(events[ind][0]>end){
            if(dp[ind][k]) val2 = dp[ind][k];
            else val2 = dp[ind][k] = solve(events,ind+1,k-1,n,events[ind][1],dp) + events[ind][2];
        }
        return max(val1,val2);
    }
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end());
        int n = events.size();
        vector<vector<int>> dp(n,vector<int> (k+1,0));
        int ans = 0;
        solve(events,0,k,n,-1,dp);
        for(int i = 0; i<n; i++){
            ans = max(ans,dp[i][k]);
        }
        return ans;
    }
};
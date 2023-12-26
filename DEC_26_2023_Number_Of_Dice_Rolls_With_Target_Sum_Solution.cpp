#include<bits/stdc++.h>
using namespace std;
class Solution {
    int mod = 1e9+7;
public:
    long long int solve(int ind, int n, int target, int k, vector<vector<int>> &v){
        if(target == 0 && ind > n) return 1;
        if(target == 0) return 0;
        if(ind > n || target < 0) return 0;
        if(v[ind][target] != -1) return v[ind][target];
        long long int ans = 0;
        for(int i = 1; i<=k; i++){
            ans = (ans + solve(ind+1,n,target-i,k,v))%mod;
        }
        return v[ind][target] = ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> v(n+1,vector<int>(target+1,-1));
        return solve(1,n,target,k,v);
    }
};
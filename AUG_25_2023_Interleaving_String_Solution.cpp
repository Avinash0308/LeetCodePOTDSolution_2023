#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve(int i, int j, int z, int n, int m, string &s1, string &s2, string &s3, int ind, vector<vector<int>> &mp){
        if(ind == z) return true;
        if(mp[i][j] != -1) return mp[i][j];
        if(i<n && s3[ind] == s1[i] && solve(i+1,j,z,n,m,s1,s2,s3,ind+1,mp)) return mp[i][j] = 1;
        if(j<m && s3[ind] == s2[j] && solve(i,j+1,z,n,m,s1,s2,s3,ind+1,mp)) return mp[i][j] = 1;
        return mp[i][j] = 0;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size(), m = s2.size(), z = s3.size();
        if(n+m != z) return false;
        vector<vector<int>> mp(n+1,vector<int> (m+1, -1));
        int i = 0, j = 0;
        return solve(i,j,z,n,m,s1,s2,s3,0,mp);
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> solve(vector<int> &v, int n){
        int a = 1, b = 1, c = INT_MIN, d = INT_MAX;
        for(int i = 0; i<n; i++){
            c = max(c,v[i]);
            d = min(d,v[i]);
            if(v[i] >= 0) a = 0;
            if(v[i] <= 0) b = 0;
        }
        return {a,b,c,d};
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> dp(m);
        vector<int> v(m);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                int cur = (nums1[i] * nums2[j])+ max(0,((j>0)?dp[j-1]:0));
                v[j] = max({cur,((j>0)?v[j-1]:0),dp[j]});
            }   
            dp = v;     
        }
        vector<int> a = solve(nums1,n);
        vector<int> b = solve(nums2,m);
        if(a[0] && b[1]){
            return a[2]*b[3];
        }
        if(a[1] && b[0]){
            return a[3]*b[2];
        }
        return dp[m-1];
    }
};
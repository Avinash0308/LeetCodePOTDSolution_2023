#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countVowelPermutation(int n) {
        long long int mod = 1e9+7;
        long long int a = 1, b = 1, c = 1, d = 1 , e = 1;
        for(int i = n-1; i>0;i --){
            long long int u, v, w, x, y;
            u = b;
            v = (a + c)%mod;
            w = (a + b + d + e)%mod;
            x = (c + e)%mod;
            y = (a%mod);
            a = (u%mod);
            b = (v%mod);
            c = (w%mod);
            d = (x%mod);
            e = (y%mod);
        }
        return (a + b + c + d + e)%mod;
    }
};
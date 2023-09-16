#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        int mod = 1e9 + 7;
        long long int a = 0, b = 0, c = 0, cur;
        for(int i = 1; i<=n; i++){
            cur = 0;
            if(i <= 3) cur++;
            cur = (cur + (a+b+c)%mod)%mod;
            a = b;
            b = c;
            c = cur;
        }
        return c; 
    }
};
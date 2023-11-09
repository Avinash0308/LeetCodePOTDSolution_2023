#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countHomogenous(string s) {
        long long int mod = 1e9+7;
        long long int ans = 0;
        int n = s.size();
        for(int i = 0; i<n; i++){
            long long int cur = 1;
            while(i<n-1 && s[i+1] == s[i]){
                cur++;
                i++;
            }
            cur = ((cur*(cur+1))/2)%mod;
            ans = (ans + cur)%mod;
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        int n = piles.size();
        int it = n/3;
        sort(piles.begin(),piles.end());
        for(int i = n-2; i>=0 && it>0; i-=2, it--){
            ans += piles[i];
        }
        return ans;
    }
};
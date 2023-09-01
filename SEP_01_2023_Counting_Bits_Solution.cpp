#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i = 0; i<=n; i++){
            int count = 0;
            for(int j = 0; j<31; j++){
                if(i & (1<<j)) count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
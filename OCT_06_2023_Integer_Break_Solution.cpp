#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int integerBreak(int n) {
        if(n <= 1) return 0;
        vector<int> v(n+1);
        v[1] = 1;
        for(int i = 2; i<=n; i++){
            int low = 1, high = i-1;
            while(low<=high){
                v[i] = max(v[i],max(v[low],low)*max(high,v[high]));
                low++,high--;
            }
        }
        return v[n];
    }
};
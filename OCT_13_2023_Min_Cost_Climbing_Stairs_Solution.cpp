#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int a = 0, b= 0, c;
        for(int i = 2; i<=n; i++){
            c = min(a+cost[i-2],b+cost[i-1]);
            a = b;
            b = c;
        }
        return b;
    }
};
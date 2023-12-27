#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size(), ans = 0;
        for(int i =0; i<n; i++){
            int maxy = neededTime[i];
            int cur = neededTime[i];
            while(i<n-1 && colors[i] == colors[i+1]){
                maxy = max(maxy,neededTime[i+1]);
                cur += neededTime[i+1];
                i++;
            }
            ans += cur-maxy;
        }
        return ans;
    }
};
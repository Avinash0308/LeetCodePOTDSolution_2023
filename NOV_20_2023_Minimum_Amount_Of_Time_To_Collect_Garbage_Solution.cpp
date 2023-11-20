#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int m = 0, p = 0, g = 0;
        int ans = 0;
        for(int i = n-1; i>=0; i--){
            for(int j = 0; j<garbage[i].size(); j++){
                if(garbage[i][j] == 'M') m++;
                else if(garbage[i][j] == 'P') p++;
                else g++;
            }
            if(i != 0){
                int val = (m != 0) + (p != 0) + (g != 0);
                ans += val*travel[i-1];
            }
        }
        ans += (m+p+g);
        return ans;
    }
};
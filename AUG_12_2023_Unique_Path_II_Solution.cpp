#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n = v.size(), m = v[0].size();
        if(v[0][0] == 1 || v[n-1][m-1] == 1) return 0;
        v[0][0] = 1;
        for(int i = 0; i<n;i ++){
            for(int j = 0; j<m ;j++){
                if(v[i][j] && !(i == 0 && j == 0)) v[i][j] = 0;
                else{
                    v[i][j] += ((i>0)?v[i-1][j]:0) + ((j>0)?v[i][j-1]:0);
                }
            }
        }
        return v[n-1][m-1];
    }
};
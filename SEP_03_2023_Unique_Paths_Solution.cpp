#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m,vector<int> (n));
        v[m-1][n-1] = 1;
        for(int i = m-1; i>=0; i--){
            for(int j = n-1; j>=0; j--){
                if(j>0){
                    v[i][j-1] += v[i][j];
                }
                if(i>0){
                    v[i-1][j] += v[i][j];
                }
            }
        }
        return v[0][0];
    }
};
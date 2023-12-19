#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> dir = {{0,0},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
        int n = img.size(), m = img[0].size();
        vector<vector<int>> ans(n,vector<int> (m));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                int sum = 0, val = 0;
                for(int k = 0; k<9; k++){
                    int x = i+dir[k][0], y = j + dir[k][1];
                    if(x<0 || y<0 || x>=n || y>=m) continue;
                    sum += img[x][y];
                    val++;
                }
                ans[i][j] = sum/val;
            }
        }
        return ans;
    }
};
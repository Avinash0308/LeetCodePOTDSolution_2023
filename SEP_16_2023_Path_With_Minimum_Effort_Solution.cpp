#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int row = heights.size(), col = heights[0].size();
        vector<vector<int>> dp(row,vector<int>(col,INT_MAX));
        vector<vector<int>> dir = {{0,-1},{-1,0},{0,1},{1,0}};
        queue<pair<int,int>> q;
        q.push({0,0});
        dp[0][0] = 0;
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            for(int i = 0; i<4; i++){
                int r = x + dir[i][0], c = y + dir[i][1];
                if(r>=0 && r<row && c >=0 && c<col){
                    int eff = max(dp[x][y],abs(heights[x][y]-heights[r][c]));
                    if(eff < dp[r][c]){
                        dp[r][c] = eff;
                        q.push({r,c});
                    }
                }
            }
        }
        return dp[row-1][col-1];
    }
};
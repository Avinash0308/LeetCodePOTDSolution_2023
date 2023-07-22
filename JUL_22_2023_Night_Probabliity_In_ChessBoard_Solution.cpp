#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double solve(vector<vector<int>> &com, vector<vector<vector<double>>> &pos, int &n, int row, int col, int k){
        if(row<0 || col<0 || row>=n || col>=n) return 0.0;
        if(pos[row][col][k] != -1) return pos[row][col][k];
        if(k == 0) return pos[row][col][k] = 1.0;
        double prob = 0.0;
        for(int i = 0; i<8; i++){
            prob += solve(com,pos,n,row+com[i][0],col+com[i][1],k-1);
        }
        prob /= 8.0;
        return pos[row][col][k] = prob;
    }
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<int>> com = {{2,1},{2,-1},{1,2},{1,-2},{-2,1},{-2,-1},{-1,-2},{-1,2}};
        vector<vector<vector<double>>> pos(n, vector<vector<double>>(n, vector<double>(k+1, -1)));
        return solve(com,pos,n,row,column,k);
    }
};
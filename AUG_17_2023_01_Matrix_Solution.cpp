#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    class node{
        public:
        int x, y, val;
        node(int a, int b, int c){
            x= a;
            y = b;
            val = c;
        }
    };
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        queue<node*> q;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(mat[i][j]) mat[i][j] = INT_MAX;
                else q.push(new node(i,j,0));
            }
        }
        vector<vector<int>> dir = {{1,0},{0,-1},{-1,0},{0,1}};
        while(!q.empty()){
            node* cur = q.front();
            q.pop();
            int x = cur->x, y = cur->y, val = cur->val;
            if(x<0 || x>=n || y<0 || y>=m || (mat[x][y] == 0 && val > 0) || (mat[x][y] != 0 && mat[x][y]<= val)) continue;
            mat[x][y] = val;
            for(int k = 0; k<4; k++){
                q.push(new node(x+dir[k][0],y+dir[k][1],val+1));
            }
        }
        return mat;
    }
};
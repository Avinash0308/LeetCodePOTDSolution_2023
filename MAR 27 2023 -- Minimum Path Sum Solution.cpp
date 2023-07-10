class Solution {
public:
    void solve(vector<vector<int>> &v , int i , int j , int cur, int m , int n,vector<vector<int>> &visit){
        if(i<0 || i>=m || j<0 || j>=n) return;
        cur += v[i][j];
        if(cur >= visit[i][j]) return;
        visit[i][j] = cur;
        solve(v,i+1,j,cur,m,n,visit);
        solve(v,i,j+1,cur,m,n,visit);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int cur = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visit(m,vector<int> (n,INT_MAX));
        solve(grid,0,0,cur,m,n,visit);
        return visit[m-1][n-1];
    }
};

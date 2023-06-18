class Solution {
public:
    long long int mod = 1e9+7;
    long long int solve(int i, int j, int n, int m, vector<vector<long long int>> &v, int prev, vector<vector<int>> &grid){
        if(i<0 || i>=n || j<0 || j>=m || prev >= grid[i][j]) return 0;
        if(v[i][j]) return v[i][j];
        return v[i][j] = (1 + solve(i-1,j,n,m,v,grid[i][j],grid) + solve(i+1,j,n,m,v,grid[i][j],grid) + solve(i,j-1,n,m,v,grid[i][j],grid) + solve(i,j+1,n,m,v,grid[i][j],grid))%mod;
    }   
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<long long int>> v(n,vector<long long int> (m,0));
        long long int sum = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                sum = (sum + solve(i,j,n,m,v,-1,grid))%mod;
            }
        }
        return sum;
    }
};

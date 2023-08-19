class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> v(n,vector<int>(n,0));
        int m = roads.size();
        vector<int> con(n);
        for(int i = 0; i<m; i++){
            int x = roads[i][0], y = roads[i][1];
            v[x][y] = 1;
            v[y][x] = 1;
            con[x]++;
            con[y]++;
        }
        int maxy = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int cur = con[i] + con[j] - v[i][j];
                maxy = max(cur,maxy);
            }
        }
        return maxy;
    }
};

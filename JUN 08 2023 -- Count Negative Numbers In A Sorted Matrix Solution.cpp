class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int i = 0, j = m-1;
        int ans = 0;
        while(i<n){
            while(j>=0 && grid[i][j] < 0) j--;
            ans += m-1-j;
            i++;
        }
        return ans;
    }
};

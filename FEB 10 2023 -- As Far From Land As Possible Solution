class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dp(n,vector<int>(n));
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<n ; j++){
                if(grid[i][j] == 1){
                    dp[i][j] = 0;
                }
                else{
                    dp[i][j] = -1;
                    if(i>0 && dp[i-1][j] != -1){
                        dp[i][j]= dp[i-1][j]+1;
                        if(j>0 && dp[i][j-1] != -1){
                            dp[i][j] = min(dp[i][j] , dp[i][j-1]+1);
                        }
                    }
                    else if(j>0 && dp[i][j-1] != -1){
                        dp[i][j] = dp[i][j-1] + 1;
                    }
                }
            }
        }
        for(int i = n-1; i>=0; i--){
            for(int j = n-1; j>=0; j--){
                if(dp[i][j] != 0){
                    if(dp[i][j] == -1){
                        if(i<n-1 && dp[i+1][j] != -1){
                            dp[i][j] = dp[i+1][j] + 1;
                            if(j<n-1 && dp[i][j+1] != -1){
                                dp[i][j] = min(dp[i][j],dp[i][j+1]+1);
                            }
                        }
                        else if(j<n-1 && dp[i][j+1]  != -1){
                            dp[i][j] = dp[i][j+1] + 1;
                        }
                    }
                    else{
                        if(i<n-1 && dp[i+1][j] != -1){
                            dp[i][j] = min(dp[i][j] , dp[i+1][j] + 1);
                            if(j<n-1 && dp[i][j+1] != -1){
                                dp[i][j] = min(dp[i][j],dp[i][j+1] + 1);
                            }
                        }
                        else if(j<n-1 && dp[i][j+1]  != -1){
                            dp[i][j] = min(dp[i][j],dp[i][j+1] + 1);
                        }
                    }
                }
            }

        }
        int maxy = INT_MIN;
        for(int i = 0; i<n ;i++){
            for(int j = 0;j <n ; j++){
                maxy = max(maxy,dp[i][j]);
            }
        }
        if(maxy == 0 || maxy == -1) return -1;
        else return maxy;
    }
};

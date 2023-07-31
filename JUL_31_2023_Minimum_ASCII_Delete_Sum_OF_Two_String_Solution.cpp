#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        vector<vector<pair<string,int>>> dp(n+1,vector<pair<string,int>>(m+1));
        for(int i = 0; i<=n; i++){
            for(int j = 0; j<=m; j++){
                if(i == 0 || j == 0) dp[i][j] = {"",0};
                else if(s1[i-1] == s2[j-1]){
                    dp[i][j] = {dp[i-1][j-1].first + s1[i-1], dp[i-1][j-1].second + 2*(int)s1[i-1]};
                }
                else{
                    if(dp[i-1][j].second > dp[i][j-1].second){
                        dp[i][j] = dp[i-1][j];
                    }
                    else{
                        dp[i][j] = dp[i][j-1];
                    }
                }
            }
        }
        long long int tot = 0;
        for(int i = 0; i<n; i++){
            tot += (int)s1[i];
        }
        for(int i =0; i<m; i++){
            tot += (int)s2[i];
        }
        return tot-dp[n][m].second;
    }
};
int main(){
    return 0;
}
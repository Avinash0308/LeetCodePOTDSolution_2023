#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);
        dp[0] = 1;
        int n = coins.size();
        for(int i = 0; i<n; i++){
            int j = coins[i];
            while(j<=amount){
                dp[j] += dp[j-coins[i]];
                j++;
            }
        }
        return dp[amount];
    }
};
int main(){
    return 0;
}
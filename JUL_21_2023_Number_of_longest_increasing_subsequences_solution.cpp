#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> dp(n);
        for(int i = n-1; i>=0; i--){
            int cur = 0, count = 0;
            for(int j = i+1; j<n; j++){
                if(nums[j] > nums[i]){
                    if(cur == dp[j].first){
                        count += dp[j].second;
                    }
                    else if(cur < dp[j].first){
                        cur = dp[j].first;
                        count = dp[j].second;
                    }
                }
            }
            dp[i] = {cur+1,(count == 0)?1:count};
        }
        int ans = 0, maxy = 0;
        for(int i = 0; i<n; i++){
            if(maxy == dp[i].first){
                ans+= dp[i].second;
            }
            else if(maxy < dp[i].first){
                ans = dp[i].second;
                maxy = dp[i].first;
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve(vector<int> &nums, map<pair<int,int>,int> &dp, int low, int high){
        if(dp.find({low,high}) != dp.end()) return dp[{low,high}];
        if(low >= high) return dp[{low,high}] = 0;
        if(high - low == 1){
            if(nums[low] == nums[high]) return dp[{low,high}] = 1;
            else return dp[{low,high}] = 0;
        }
        else if(high - low == 2){
            if((nums[low] == nums[high] && nums[low] == nums[low+1]) || (nums[low+1] - nums[low] == 1 && nums[high]-nums[low] == 2)) return dp[{low,high}] = 1;
            else return dp[{low,high}] = 0;
        }
        else{
            if((solve(nums,dp,low,low+1) && solve(nums,dp,low+2,high)) || (solve(nums,dp,low,low+2) && solve(nums,dp,low+3,high))) return dp[{low,high}] = 1;
            else return dp[{low,high}] = 0;
        }
    }
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        map<pair<int,int>,int> dp;
        return solve(nums,dp,0,n-1);
    }
};
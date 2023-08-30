#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int> &nums, long long &miny, long long &ans, int &val){
        long long add = (val-1)/miny;
        ans += add;
        miny = (val/(add+1));

    }
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long miny = nums[n-1];
        long long ans = 0;
        for(int i = n-2; i>=0; i--){
            if(miny>=nums[i]){
                miny = nums[i];
            }
            else{
                solve(nums,miny,ans,nums[i]);
            }
        }
        return ans;
    }
};
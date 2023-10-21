#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MIN;
        deque<pair<int,int>> q;
        for(int i = 0; i<n; i++){
            int lower_ind = i-k;
            while(!q.empty() && q.front().second < lower_ind) q.pop_front();
            int cur = nums[i] + ((q.empty())?0:max(0,q.front().first));
            ans = max(ans,cur);
            while(!q.empty() && q.back().first <= cur) q.pop_back();
            q.push_back({cur,i});
        }
        return ans;
    }
};
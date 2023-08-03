#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int> &cur, int ind, int n, vector<vector<int>> &ans, vector<int> &nums, vector<int> &visit){
        if(visit[ind]) return;
        cur.push_back(nums[ind]);
        visit[ind] = 1;
        if(cur.size() == n){
            ans.push_back(cur);
        }
        for(int i = 0; i<n; i++){
            if(i == ind) continue;
            if(!visit[i]) solve(cur,i,n,ans,nums,visit);
        }
        cur.pop_back();
        visit[ind] = 0;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> cur;
        vector<int> visit(n);
        for(int i = 0; i<n; i++){
            solve(cur,i,n,ans,nums,visit);
        }
        return ans;
    }
};
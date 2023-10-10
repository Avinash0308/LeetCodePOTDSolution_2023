#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int> s;
        for(int i =0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        vector<int> v;
        for(auto it:s){
            v.push_back(it);
        }
        int ans = INT_MAX;
        for(int i = 0; i<v.size(); i++){
            int val = v[i] + nums.size() -1;
            int ind = upper_bound(v.begin(),v.end(),val) - v.begin();
            int siz = nums.size() - (ind-i);
            ans = min(ans,siz);
        }
        return ans;
    }
};
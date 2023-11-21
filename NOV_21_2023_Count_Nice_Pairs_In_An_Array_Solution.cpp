#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        long long int mod = 1e9+7;
        long long int ans = 0;
        unordered_map<long long int, long long int> m;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            long long int val = nums[i], cur = 0;
            while(val){
                cur = cur*10 + (val%10);
                val/=10;
            }
            m[nums[i]-cur]++;
        }
        for(auto it:m){
            ans = (ans + (((it.second-1)*(it.second)))/2)%mod;
        }
        return ans;
    }
};

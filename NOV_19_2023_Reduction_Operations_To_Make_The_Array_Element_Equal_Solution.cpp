#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        int cur = 0;
        for(int i = 0;i <n;i ++){
            ans += cur;
            while(i<n-1 && nums[i] == nums[i+1]){
                i++;
                ans += cur;
            }
            cur++;
        }
        return ans;
    }
};
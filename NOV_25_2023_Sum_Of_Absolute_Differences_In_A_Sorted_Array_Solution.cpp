#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int sum2 = accumulate(nums.begin(),nums.end(),0);
        int sum = 0;
        for(int i = n-1; i>=0; i--){
            result[i] = sum - ((n-1-i)*nums[i]);
            sum2 -= nums[i];
            result[i] += (i*nums[i])-sum2;
            sum += nums[i];
        }
        return result;
    }
};
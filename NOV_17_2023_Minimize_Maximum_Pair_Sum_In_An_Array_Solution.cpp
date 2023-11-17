#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxy = 0, i = 0 , j = nums.size()-1;
        while(i < j){
            maxy = max(maxy,nums[i]+nums[j]);
            i++,j--;
        }
        return maxy;
    }
};
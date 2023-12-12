#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int val1 = 0, val2 = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] >= val1){
                val2 = val1;
                val1 = nums[i];
            }
            else if(nums[i] > val2){
                val2 = nums[i];
            }
        }
        return (val1-1)*(val2-1);
    }
};
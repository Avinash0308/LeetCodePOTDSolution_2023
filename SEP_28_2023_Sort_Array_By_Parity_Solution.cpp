#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        while(i<j){
            if(nums[i]%2 == 0) i++;
            if(nums[j]%2) j--;
            if(nums[i]%2 == 1 && nums[j]%2 == 0 && i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> solve(vector<int> &nums, int target, int low, int high){
        if(low>high) return {-1,-1};
        int mid = (low+high)/2;
        if(nums[mid] == target){
            vector<int> left = solve(nums,target,low,mid-1);
            vector<int> right = solve(nums,target,mid+1,high);
            int l = (left[0] == -1)?mid:left[0];
            int r = (right[1] == -1)?mid:right[1];
            return {l,r};
        }
        else if(nums[mid] > target){
            return solve(nums,target,low,mid-1);
        }
        else{
            return solve(nums,target,mid+1,high);
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        return solve(nums,target,i,j);
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int find(vector<int> nums, int low , int high){
        while(low<=high){
            int mid = (low+high)/2;
            if(mid <nums.size() -1 && nums[mid] > nums[mid+1]){
                return mid+1;
            }
            else if(nums[mid] >= nums[0]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return 0;
    }
    int secondfind(vector<int> nums, int low , int high , int start,int tar){
        int n = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            int cur = (mid+start)%n;
            if(nums[cur] == tar){
                return cur;
            }
            else if(nums[cur] > tar){
                high  = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ind = find(nums,0,n-1);
        return secondfind(nums,0,n-1,ind,target);

    }
};
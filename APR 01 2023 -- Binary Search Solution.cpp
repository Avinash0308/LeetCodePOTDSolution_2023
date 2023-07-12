#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int seac(vector<int>&v , int low , int high , int val){
        if(low<=high){
            int mid = (low+high)/2;
            if(v[mid] == val) return mid;
            else if(v[mid]>val) return seac(v,low,mid-1,val);
            else return seac(v,mid+1,high,val);
        }
        else{
            return -1;
        }
    }
    int search(vector<int>& nums, int target) {
        return seac(nums,0,nums.size()-1,target);
    }
};

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int ans = nums[k];
        int miny = nums[k];
        int left = k-1, right = k+1, n = nums.size();
        while(left>=0 && right<n){
            if(nums[left] > nums[right]){
                miny = min(nums[left],miny);
                left--;
            }
            else{
                miny = min(nums[right],miny);
                right++;
            }
            ans = max(ans,(right-left-1)*miny);
        }
        while(left>=0){
            miny = min(nums[left],miny);
            left--;
            ans = max(ans,(right-left-1)*miny);
        }
        while(right < n){
            miny = min(nums[right],miny);
            right++;
            ans = max(ans,(right-left-1)*miny);
        }
        return ans;
    }
};
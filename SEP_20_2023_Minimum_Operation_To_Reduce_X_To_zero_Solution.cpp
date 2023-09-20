#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int miny = INT_MIN;
        x = accumulate(nums.begin(),nums.end(),0) - x;
        int n = nums.size(), start = 0, cur = 0;
        for(int i = 0; i<n; i++){
            cur +=  nums[i];
            while(start<=i && cur > x){
                cur -= nums[start];
                start++;
            }
            if(cur == x) miny = max(miny,i-start+1);
        }
        if(miny == INT_MIN) return -1;
        else return n-miny;
    }
};
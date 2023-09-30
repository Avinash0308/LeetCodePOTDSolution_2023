#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        int val = INT_MIN;
        for(int i = n-1; i>=0; i--){
            if(val > nums[i]) return true;
            while(!s.empty() && s.top() < nums[i]){
                val = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};
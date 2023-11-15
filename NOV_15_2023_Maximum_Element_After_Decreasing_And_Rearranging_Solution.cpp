#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int prev = 0;
        for(int i = 0; i<n; i++){
            if(arr[i]-prev >= 1){
                prev += 1;
            }
        }
        return prev;
    }
};
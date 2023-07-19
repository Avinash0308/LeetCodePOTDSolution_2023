#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int,int>> v(n);
        for(int i = 0; i<n; i++){
            v[i] = {intervals[i][1],intervals[i][0]};
        }
        sort(v.begin(),v.end());
        int end = INT_MIN;
        int count = 0;
        for(int i = 0; i<n ; i++){
            if(v[i].second >= end){
                count++;
                end = v[i].first;
            }
        }
        return n-count;
    }
};
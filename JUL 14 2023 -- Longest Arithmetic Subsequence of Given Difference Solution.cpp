#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        unordered_map<int,int> m;
        int maxy = 0;
        for(int i = n-1; i>=0; i--){
            maxy = max(m[arr[i]] = (m.find(arr[i]+difference) == m.end())?1:1+m[arr[i]+difference],maxy);
        }
        return maxy;
    }
};
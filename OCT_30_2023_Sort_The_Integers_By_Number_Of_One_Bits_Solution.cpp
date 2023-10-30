#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int,int>> v(n);
        for(int i = 0; i<n; i++){
            int one = 0;
            for(int j = 0; j<=15; j++){
                if(arr[i] & (1<<j)) one++; 
            }
            v[i] = {one,arr[i]};
        }
        sort(v.begin(),v.end());
        for(int i = 0; i<n;i ++){
            arr[i] = v[i].second;
        }
        return arr;
    }
};
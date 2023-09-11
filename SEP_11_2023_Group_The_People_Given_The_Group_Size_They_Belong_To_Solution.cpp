#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> m;
        int n = groupSizes.size();
        for(int i = 0; i<n; i++){
            m[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto i : m){
            int m = i.second.size();
            int val = i.first;
            int j = 0;
            while(j<m){
                vector<int> cur(val);
                for(int k = 0; k<val && j<m; k++,j++){
                    cur[k] = i.second[j];
                }
                ans.push_back(cur);
            }
        }   
        return  ans;
    }
};
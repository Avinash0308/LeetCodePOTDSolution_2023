#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    int solve(vector<vector<int>> &graph, int ind, vector<int> &is_saf){
        if(is_saf[ind]) return is_saf[ind];
        is_saf[ind] = -1;
        int n = graph[ind].size();
        for(int i = 0; i<n; i++){
            if(solve(graph,graph[ind][i],is_saf) == -1){
                return is_saf[ind] = -1;
            }
        }
        return is_saf[ind] = 1;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> is_saf(n);
        for(int i = 0; i<n; i++){
            if(graph[i].empty()){
                is_saf[i] = 1;
            }
        }
        for(int i = 0; i<n; i++){
            solve(graph,i,is_saf);
        }
        vector<int> ans;
        for(int i = 0; i<n; i++){
            if(is_saf[i] == 1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
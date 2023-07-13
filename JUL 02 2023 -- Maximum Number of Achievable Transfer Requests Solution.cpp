#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<vector<int>> &requests, int n, int &ans, int ind, vector<int> &buil, int cur){
        if(ind == n){
            bool can = true;
            for(int i = 0; i<buil.size(); i++){
                if(buil[i]){
                    can = false;
                    break;
                }
            }
            if(can){
                ans = max(ans,cur);
            }
            return;
        }
        solve(requests,n,ans,ind+1,buil,cur);
        int from = requests[ind][0], to = requests[ind][1];
        buil[from]--;
        buil[to]++;
        solve(requests,n,ans,ind+1,buil,cur+1);
        buil[from]++;
        buil[to]--;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int siz = requests.size();
        vector<int> buil(n);
        int ans = 0;
        solve(requests, siz, ans, 0, buil, 0);
        return ans;
    }
};

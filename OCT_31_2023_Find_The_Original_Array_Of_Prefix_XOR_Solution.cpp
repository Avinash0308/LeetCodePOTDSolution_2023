#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        int cur = 0;
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            int val = 0;
            for(int j = 30; j>=0; j--){
                if(pref[i] & (1<<j)){
                    if(!(cur & (1<<j))){
                        val += (1<<j);
                    }
                }
                else{
                    if(cur & (1<<j)){
                        val += (1<<j);
                    }
                }
            }
            ans[i] = val;
            cur = pref[i];
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<float> v(n);
        for(int i = 0; i<n; i++){
            v[i] = (float)dist[i]/speed[i];
        }
        sort(v.begin(),v.end());
        float cur = 0;
        for(int i = 0; i<n;i ++){
            if(cur>=v[i]) return i;
            cur+=1;
        }
        return n;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        v.push_back(1);
        while(rowIndex--){
            vector<int> cur;
            cur.push_back(1);
            int n = v.size();
            for(int i = 0; i<n-1; i++){
                cur.push_back(v[i] + v[i+1]);
            }
            cur.push_back(1);
            v = cur;
        }
        return v;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i = 1; i<numRows; i++){
            vector<int> cur(i+1);
            for(int j = 0; j<=i; j++){
                cur[j] = ((j-1>=0)?ans[i-1][j-1]:0) + ((j<i)?ans[i-1][j]:0);
            }
            ans.push_back(cur);
        }
        return ans;
    }
};
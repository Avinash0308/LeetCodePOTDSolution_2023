#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> cham(1);
        cham[0] = poured;
        for(int i = 1; i<=query_row; i++){
            vector<double> cur(i+1);
            for(int j = 0; j<=i; j++){
                cur[j] = ((j<i)?max((cham[j]-1)/2,(double)0):0) + ((j>0)?max((cham[j-1]-1)/2,(double)0):0);
            }
            cham = cur;
        }
        return min(cham[query_glass],double(1));
    }
};
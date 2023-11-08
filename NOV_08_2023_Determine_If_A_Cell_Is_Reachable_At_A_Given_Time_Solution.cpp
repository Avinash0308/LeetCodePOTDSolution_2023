#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx == fx && sy == fy && t == 1) return false;
        if(abs(sx-fx) + max(0,abs(sy-fy) - abs(sx-fx)) <= t) return true;
        else return false;
    }
};
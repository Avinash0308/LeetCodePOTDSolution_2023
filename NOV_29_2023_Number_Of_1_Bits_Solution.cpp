#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one = 0;
        for(int i = 0; i<32; i++){
            if(n & (1<<i)) one++;
        }
        return one;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        int zero = 0;
        while(n %2 != 1 && n){
            n/=2;
            zero++;
        }
        if(n == 1 && zero%2 == 0) return true;
        else return false;
    }
};
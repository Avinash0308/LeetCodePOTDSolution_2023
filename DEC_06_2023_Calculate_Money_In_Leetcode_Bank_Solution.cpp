#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalMoney(int n) {
        long long int total = 0, last = 28, cur = 1;
        while(n >= 7){
            total += last;
            last += 7;
            cur++;
            n-=7;
        }
        while(n--){
            total += cur;
            cur++;
        }
        return total;
    }
};
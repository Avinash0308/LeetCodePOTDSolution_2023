#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1) return 0;
        int len = 1 << (n-2);
        if(len >= k) return kthGrammar(n-1,k);
        else return 1 - kthGrammar(n-1,k-len);
    }
};
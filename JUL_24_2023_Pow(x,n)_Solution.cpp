#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double z, int n) {
        if(n == 1)return z;
        if(n == -1) return 1/z;
        if(n == 0) return 1;
        double x = z;
        long long int i = 1;
        while(i*2 <= abs(n)){
            x = x*x;
            i *= 2;
        }
        if(n >= 0){
            return x * myPow(z,n-i);
        }
        else{
            return (1/x) * myPow(z,i+n); 
        }
    }
};
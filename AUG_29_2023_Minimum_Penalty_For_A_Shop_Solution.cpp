#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int pen = 0;
        int n = customers.size();
        for(int i = n-1; i>=0; i--){
            if(customers[i] == 'Y') pen++;
        }
        int ans = pen, cur = 0, ind = 0;
        for(int i = 0; i<n; i++){
            if(customers[i] == 'Y'){
                pen--;
            }
            else{
                cur++;
            }
            if(pen + cur < ans){
                ans = pen+cur;
                ind = i+1;
            }
        }
        return ind;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int req = n/4;
        for(int i = 0; i<n; i++){
            int cur = 1;
            while(i<n-1 && arr[i] == arr[i+1]){
                i++;
                cur++;
            }
            if(cur > req) return arr[i];
        }
        return -1;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> v(n);
        for(int i = n-1; i>=0; i--){
            int ways;
            if(s[i] == '0'){
                v[i] = 0;
                continue;
            }
            if(i == n-1){
                v[i] = 1;
                continue;
            }
            v[i] = v[i+1] + ((s[i] == '1' || (s[i] == '2' && s[i+1]<='6'))?(i == n-2 ? 1 : v[i+2]):0);

        }
        return v[0];
    }
};
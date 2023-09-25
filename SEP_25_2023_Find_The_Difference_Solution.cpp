#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int diff = 0;
        int n = s.size();
        for(int i = 0; i<n; i++){
            diff += (t[i]-s[i]);
        }
        diff += t[n]-'a';
        return char(diff+97);
    }
};
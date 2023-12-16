#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> v(26,0), x(26,0);
        for(int i = 0; i<s.size();i ++){
            v[s[i]-'a']++;
            x[t[i]-'a']++;
        }
        return v == x;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);
        int n = s.size();
        for(int i = 0; i<n;i ++){
            v[s[i]-'a']++;
        }
        sort(v.begin(),v.end());
        int ava = INT_MAX;
        int ans = 0;
        for(int i = 25; i>=0 && v[i]; i--){
            if(ava >= v[i]) ava = v[i]-1;
            else{
                ans += v[i]-max(ava,0);
                ava--;
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<pair<int,int>> v(26,{-1,-1});
        for(int i = 0; i<s.size(); i++){
            int ind = s[i] - 'a';
            if(v[ind].first == -1) v[ind].first = i;
            else v[ind].second = i;
        }
        int ans = -1;
        for(int i = 0; i<26; i++){
            if(v[i].second != -1){
                ans = max(ans,v[i].second-v[i].first - 1);
            }
        }
        return ans;
    }
};
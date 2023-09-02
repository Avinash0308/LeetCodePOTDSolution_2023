#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string,int> dict;
        for(auto it : dictionary){
            dict[it]++;
        }
        int n = s.size();
        vector<int> extra_count(n+1,INT_MAX);
        extra_count[n] = 0;
        for(int i = n-1; i>=0; i--){
            string cur;
            for(int j = i; j<n; j++){
                cur.push_back(s[j]);
                int count = 0;
                if(dict.find(cur) == dict.end()) count += cur.size();
                count += extra_count[j+1];
                extra_count[i] = min(extra_count[i],count);
            }
        }
        return extra_count[0];
    }
};
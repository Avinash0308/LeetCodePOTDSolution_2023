#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> old(26,-1);
        vector<int> lat(26,-1);
        vector<int> ans(26);
        for(int i = 0; i<n; i++){
            if(old[s[i]-'a'] == -1){
                old[s[i]-'a'] = i;
                lat[s[i]-'a'] = i;
            }
            else{
                int uni = 0;
                for(int j = 0; j<26; j++){
                    if(lat[j] > old[s[i]-'a']) uni++;
                }
                ans[s[i]-'a'] = uni;
                lat[s[i]-'a'] = i;
            }
        }
        int answer = 0;
        for(int i = 0; i<26; i++){
            answer += ans[i];
        }
        return answer;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        vector<int> v(26);
        int ans = -1;
        int n = s.size();
        int val = 0;
        int start = 0;
        for(int i = 0; i<n; i++){
            if(v[s[i]-'a'] == 0){
                val++;
            }
            v[s[i]-'a']++;
            if(val == k){
                ans = max(i-start+1,ans);
            }
            else if(val > k){
                while(start<i && --v[s[start]-'a']){
                    start++;
                }
                start++;
                val--;
            }
        }
        return ans;
    }
};
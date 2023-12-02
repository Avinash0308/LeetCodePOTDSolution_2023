#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(26,0);
        for(int i = 0; i<chars.size(); i++){
            count[chars[i]-'a']++;
        }
        int ans = 0;
        for(int i = 0; i<words.size(); i++){
            vector<int> cur = count;
            bool done = true;
            for(auto j:words[i]){
                if(cur[j-'a'] != 0){
                    cur[j-'a']--;
                }
                else {
                    done = false;
                    break;
                }
            }
            if(done) ans += words[i].size();
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    bool solve(unordered_map<string,int> &m, string &s, int ind, vector<int> &pos){
        if(s.size() == ind || pos[ind] == 1) return true;
        if(pos[ind] == -1) return false;
        int n = s.size();
        string back = s.substr(ind,n-ind);
        string cur;
        for(int i = ind; i<n; i++){
            cur.push_back(s[i]);
            back.erase(back.begin());
            if(m[cur] && solve(m,s,i+1,pos)){
                pos[ind] = 1;
                return true;
            }
        }
        pos[ind] = -1;
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> m;
        m[""]++;
        for(auto it:wordDict){
            m[it]++;
        }
        vector<int> pos(s.size(),0);
        return solve(m,s,0,pos);
    }
};
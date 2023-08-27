#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int ind, int cur, int val, vector<int> &stones, map<pair<int,int>,int> &m){
        if(ind == stones.size()) return 0;
        if(cur + val < stones[ind]) return 0;
        else if(cur+val == stones[ind]){
            if(ind == stones.size() - 1) return 1;
            if(m.find({ind,val}) != m.end()) return 0;
            if(solve(ind+1,cur+val,val,stones,m) || solve(ind+1,cur+val,val-1,stones,m) || solve(ind+1,cur+val,val+1,stones,m)) return m[{ind,val}] = 1;
            return m[{ind,val}] = 0;
        }
        else{
            return solve(ind+1,cur,val,stones,m);
        }
    }
    bool canCross(vector<int>& stones) {
        map<pair<int,int>,int> dp;
        return solve(0,0,0,stones,dp);
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void doit(vector<vector<int>> &ans, vector<int> &cur , int ind , int &n , int& k){
        if(cur.size() == k){
            ans.push_back(cur);
            return;
        }
        if(ind > n) return;
         doit(ans,cur,ind+1,n,k);
        cur.push_back(ind);
        doit(ans,cur,ind+1,n,k);
        cur.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> cur;
        doit(ans,cur,1,n,k);
        return ans;
    }
};
int main(){
    return 0;
}
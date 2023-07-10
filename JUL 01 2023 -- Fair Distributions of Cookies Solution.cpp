class Solution {
    int ans = INT_MAX;
public:
    void solve(int ind, int n, int k, vector<int> &cookies, vector<int> &count, int cur){
        if(ind == n){
            ans = min(cur,ans);
            return;
        }
        for(int i = 0; i<k; i++){
            count[i] += cookies[ind];
            int prev_cur = cur;
            cur = max(cur,count[i]);
            solve(ind+1,n,k,cookies,count,cur);
            count[i] -= cookies[ind];
            cur = prev_cur;
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        int n = cookies.size();
        vector<int> count(k);
        solve(0,n,k,cookies,count,0);
        return ans;
    }
};

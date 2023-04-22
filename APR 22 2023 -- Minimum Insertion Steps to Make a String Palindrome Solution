class Solution {
public:
    int solve(int i , int j , string &s, vector<vector<int>> &v){
        if(i>j) return 0;
        if(v[i][j] != -1) return v[i][j];
        if(s[i] == s[j]) return v[i][j] = solve(i+1,j-1,s,v);
        else{
            return v[i][j] = 1 + min(solve(i+1,j,s,v),solve(i,j-1,s,v));
        }
    }
    int minInsertions(string s) {
        int i = 0 , j = s.size()-1;
        vector<vector<int>> v(s.size(),vector<int>(s.size(),-1));
        int val = solve(i,j,s,v);
        return val;
    }
};

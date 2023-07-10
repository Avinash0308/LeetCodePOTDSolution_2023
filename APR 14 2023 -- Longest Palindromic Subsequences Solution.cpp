class Solution {
public:
    int solve(string &s , int i , int j , vector<vector<int>> &v){
        if(i>j) return 0;
        if(v[i][j]) return v[i][j];
        if(i == j) return 1;
        if(s[i] == s[j]){
            return v[i][j] = 2+solve(s,i+1,j-1,v);
        }
        else{
            return v[i][j] = max(solve(s,i+1,j,v),solve(s,i,j-1,v));
        }
    }
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> v(n,vector<int>(n,0));
        return solve(s,0,n-1,v);
    }
};

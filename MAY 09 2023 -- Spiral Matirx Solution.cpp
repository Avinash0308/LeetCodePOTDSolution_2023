class Solution {
public:
    void solve(vector<vector<int>> &matrix,vector<int> &ans, int n, int m, int k){
        if(n<=0 || m<=0) return;
        for(int i = k; i<k+n; i++){
            ans.push_back(matrix[k][i]);
        }
        for(int i = k+1; i<k+m; i++){
            ans.push_back(matrix[i][k+n-1]);
        }
        for(int i = k+n-2; i>=k && m>1; i--){
            ans.push_back(matrix[k+m-1][i]);
        }
        for(int i = k+m-2; i>k && n>1; i--){
            ans.push_back(matrix[i][k]);
        }
        solve(matrix,ans,n-2,m-2,k+1);
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int k = 0;
        solve(matrix,ans,m,n,k);
        return ans;
    }
};

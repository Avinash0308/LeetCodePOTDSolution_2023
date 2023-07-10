class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int> (n));
        int k = 1;
        for(int i = 0; i<(n+1)/2; i++){
            for(int j = i; j<n-i; j++){
                v[i][j] = k;
                k++;
            }
            for(int j = i+1; j<n-i; j++){
                v[j][n-i-1] = k;
                k++;
            }
            for(int j = n-i-2; j>=i; j--){
                v[n-i-1][j] = k;
                k++;
            }
            for(int j = n-i-2; j>i; j--){
                v[j][i] = k;
                k++;
            }
        }
        return v;
    }
};

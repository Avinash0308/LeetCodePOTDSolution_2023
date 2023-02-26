class Solution {
public:
    int minDistance(string word1, string word2) {
        int x = word1.length();
        int y = word2.length();
        vector<vector<int>> v(x+1,vector<int> (y+1));
        for (int i = 0; i <= x; i++) {
            v[i][0] = i;
        }
        for (int j = 0; j <= y; j++) {
            v[0][j] = j;
        }
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= y; j++) {
                if (word1[i-1] == word2[j-1]) {
                    v[i][j] = v[i-1][j-1];
                } 
                else {
                    int insertOp = v[i][j-1]; 
                    int deleteOp = v[i-1][j]; 
                    int replaceOp = v[i-1][j-1]; 
                    v[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
                }
            }
        }
        return v[x][y];
    }
};

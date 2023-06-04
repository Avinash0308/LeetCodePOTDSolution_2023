class Solution {
public:
    void solve(vector<vector<int>> &v , int from , vector<int> &visit){
        visit[from] = 1;
        for(int i = 0; i<v[from].size(); i++){
            if(v[from][i] && !visit[i]){
                solve(v,i,visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visit(n);
        int count = 0;
        for(int i = 0; i<n ; i++){
            if(!visit[i]){
                count++;
                solve(isConnected,i,visit);
            }
        }
        return count;
    }
};

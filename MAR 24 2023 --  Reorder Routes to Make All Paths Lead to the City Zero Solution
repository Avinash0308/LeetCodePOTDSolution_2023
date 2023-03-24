class Solution {
public:
    int solve(vector<vector<int>> &m, int from , vector<bool> &visit){
        int change = 0;
        visit[from] = true;
        for(int i = 0; i<m[from].size(); i++){
            int to = abs(m[from][i]);
            if(!visit[to]){
                change += solve(m,to,visit);
                if(m[from][i] > 0) change++;
            }
        }
        return change;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> m(n);
        for(int i = 0; i<n-1 ; i++){
            m[connections[i][1]].push_back(-connections[i][0]);
            m[connections[i][0]].push_back(connections[i][1]);
        }
        vector<bool> visit(n);
        return solve(m,0,visit);
    }
};

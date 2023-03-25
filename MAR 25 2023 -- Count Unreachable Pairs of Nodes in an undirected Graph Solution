class Solution {
public:
    long long int solve(vector<vector<int>> &v , vector<int> &visit , int from){
        visit[from] = 1;
        long long int cur = 1;
        for(int i = 0; i<v[from].size(); i++){
            if(!visit[v[from][i]]){
                cur += solve(v,visit,v[from][i]);
            }
        }
        return cur;
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> v(n);
        for(int i = 0; i<edges.size(); i++){
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visit(n);
        vector<long long int> pair;
        for(int i = 0; i<n ; i++){
            if(!visit[i]){
                long long int cur = solve(v,visit,i);
                pair.push_back(cur);
            }
        }
        long long ans = 0;
        long long val = 0;
        for(int i = 0; i<pair.size()-1; i++){
            ans += pair[i];
            val += ans*pair[i+1];
        }
        return val;
    }
};

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visit(n);
        queue<int> q;
        for(int i = 0; i<n; i++){
            if(visit[i]) continue;
            visit[i] = 1;
            for(q.push(i); !q.empty(); q.pop()){
                int cur = q.front();
                for(int neighbor : graph[cur]){
                    if(!visit[neighbor]){
                        visit[neighbor] = -visit[cur];
                        q.push(neighbor);
                    }
                    else if(visit[neighbor] == visit[cur]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end){
        unordered_map<int,vector<pair<int,double>>> m;
        for(int i = 0; i<edges.size(); i++){
            m[edges[i][0]].push_back({edges[i][1],succProb[i]});
            m[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double> visit(n,0.0);
        visit[start] = 1.0;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int val = q.front();
            q.pop();
            for(auto it:m[val]){
                int ind = it.first;
                double ma = it.second;
                if(visit[ind] < ma*visit[val]){
                    visit[ind] = ma*visit[val];
                    q.push(ind);
                }
            }
        }
        return visit[end];
    }
};

class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int> ans(n,-1);
        vector<int> v1(n);
        vector<int> v2(n);
        vector<vector<pair<int,int>>> pa(n);
        for(int i = 0; i<redEdges.size(); i++){
            pa[redEdges[i][0]].push_back({redEdges[i][1],1});
        }
        for(int i = 0; i<blueEdges.size(); i++){
            pa[blueEdges[i][0]].push_back({blueEdges[i][1],2});
        }
        ans[0] = 0;
        v1[0] = 1;
        v2[0] = 1;
        queue<pair<int,int>> q;
        for(int i =0; i<pa[0].size(); i++){
            q.push(pa[0][i]);
            if(ans[pa[0][i].first] == -1) ans[pa[0][i].first] = 1;
        }
        int temp = 1;
        while(!q.empty()){
            temp++;
            int len = q.size();
            for(int i = 0; i<len; i++){
                pair<int,int> p = q.front();
                q.pop();
                if(p.second == 1) v1[p.first] = 1;
                else v2[p.first] = 1;
                for(int i = 0; i<pa[p.first].size(); i++){
                    if(p.second == 1 && (v2[pa[p.first][i].first] || pa[p.first][i].second == 1)) continue;
                    if(p.second == 2 && (v1[pa[p.first][i].first] || pa[p.first][i].second == 2)) continue;
                    q.push(pa[p.first][i]);
                    if(ans[pa[p.first][i].first] == -1) ans[pa[p.first][i].first] = temp;
                }
            }
        }
        return ans;
    }
};

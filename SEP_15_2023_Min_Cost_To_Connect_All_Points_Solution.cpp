#include<bits/stdc++.h>
using namespace std;
//Kruskal's algorithm
class UnionFind {    
    vector<int> root, rank;
public:
    UnionFind(int n) : root(n), rank(n) {
        rank.assign(n, 1);
        for (int i = 0; i <n; i++) 
            root[i] = i;
    }

    int Find(int x) {
        if (x == root[x]) return x;
        else return root[x] = Find(root[x]);
    }

    void Union(int x, int y) {
        int rX = Find(x), rY = Find(y);
        if (rX == rY)  return;
        if (rank[rX] > rank[rY]) swap(rX, rY);   
        root[rX] = rY;
        if (rank[rX]==rank[rY]) rank[rY]++;
    }
};
class Solution {
public:
    using int3=tuple<int, int, int>;
    int V, E;
    int L1(vector<int>& P, vector<int>& Q){
        return abs(P[0]-Q[0])+abs(P[1]-Q[1]);
    }

    vector<int3> edge;
    void build_graph(vector<vector<int>>& points){
        E=V*(V-1)/2;
        edge.reserve(E);
        for(int i=0; i<V-1; i++){
            for(int j=i+1; j<V; j++){
                int&& wt=L1(points[i], points[j]);
                edge.push_back({wt, i, j});
            }
        }
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        V=points.size();
        if (V==1) return 0;//edge case
        UnionFind uf(V);

        build_graph(points);
        sort(edge.begin(), edge.end());

        int edges_MST=0, MST_wt=0;
        for(int i=0; i<E; i++){
            auto& [d, v, w]=edge[i];
            if (uf.Find(v) == uf.Find(w)) continue;
            uf.Union(v, w);
            edges_MST++;
            MST_wt+=d;
            if (edges_MST==V-1) return MST_wt;
        }
        return -1;
    }
};
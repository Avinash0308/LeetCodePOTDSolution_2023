class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
    void DFS(int v);
};
void Graph::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int size = connections.size();
        if(n > size+1) return -1;
        Graph * g = new Graph;
        for(int i = 0; i<connections.size(); i++){
            g->adj[connections[i][0]].push_back(connections[i][1]);
            g->adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i = 0; i<n ;i++){
            g->visited[i] = false;
        }
        int count = 0;
        for(int i = 0 ; i<n ; i++){
            if(g->visited[i] == false){
                count++;
                g->DFS(i);
            }
        }
        return count-1;
    }

};

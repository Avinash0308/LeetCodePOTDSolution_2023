
class Solution {
public:
    class state{
        public:
        int i, j, key;
        state(int a, int b, int c){
            i = a;
            j = b;
            key = c;
        }
    };
    int shortestPathAllKeys(vector<string>& grid) {
        int no_of_key = 0;
        int n = grid.size(), m = grid[0].size();
        int x = -1, y = -1;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] >= 'a' && grid[i][j] <= 'z') no_of_key++;
                if(grid[i][j] == '@'){
                    x = i;
                    y = j;
                }
            }
        }
        vector<vector<int>> direct = {{-1,0},{1,0},{0,-1},{0,1}};
        state *it = new state(x,y,0);
        queue<state*> q;
        q.push(it);
        unordered_map<string,int> visit;
        int steps = 0;
        string s = to_string(x) + " " + to_string(y) + " " + to_string(0);
        visit[s] = 1;
        while(!q.empty()){
            int siz = q.size();
            while(siz--){
            state *cur = q.front();
            q.pop();
            if(cur->key == (1<<no_of_key) - 1) return steps;
            for(auto f : direct){
                x = cur->i + f[0];
                y = cur->j + f[1];
                int keys = cur->key;
                if(x>=0 && x<n && y>=0 && y<m){
                    char c = grid[x][y];
                    if(c == '#') continue;
                    if(c>='a' && c<='z'){
                        keys |= 1<<(c-'a');
                    }
                    if(c>='A' && c<='Z' && ((keys >> (c-'A')) & 1) == 0) continue;
                    s = to_string(x) + " " + to_string(y) + " " + to_string(keys);
                    if(visit.find(s) == visit.end()){
                        visit[s] = 1;
                        q.push(new state(x,y,keys));
                    }
                }
            }
            }
            steps++;
        }
        return -1;
    }
};

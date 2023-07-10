class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m ; j++){
                if(grid[i][j] == 0 && (i == 0 || j == 0 || i == n-1 || j == m-1)){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        grid[x][y]=-1;
                        if(x>0 && grid[x-1][y] == 0) q.push({x-1,y});
                        if(y>0 && grid[x][y-1] == 0) q.push({x,y-1});
                        if(x<n-1 && grid[x+1][y] == 0) q.push({x+1,y});
                        if(y<m-1 && grid[x][y+1] == 0) q.push({x,y+1});
                    }
                }
            }
        }
        int count = 0;
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m ; j++){
                if(grid[i][j] == 0)
                {
                    count++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        grid[x][y] = -1;
                        if(x>0 && grid[x-1][y] == 0) q.push({x-1,y});
                        if(y>0 && grid[x][y-1] == 0) q.push({x,y-1});
                        if(x<n-1 && grid[x+1][y] == 0) q.push({x+1,y});
                        if(y<m-1 && grid[x][y+1] == 0) q.push({x,y+1});
                    }
                }
            }
        }
        return count;
    }
};

class Solution {
public:
    void inform_all(int headID, vector<vector<int>> &v, vector<int> &informTime, int cur, int &maxy){
        cur += informTime[headID];
        int n = v[headID].size();
        for(int i = 0; i<n; i++){
            inform_all(v[headID][i],v,informTime,cur,maxy);
        }
        maxy = max(maxy,cur);
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int cur = 0, maxy = 0;
        vector<vector<int>> v(n);
        for(int i = 0; i<n; i++){
            if(manager[i] != -1){
                v[manager[i]].push_back(i);
            }
        }
        inform_all(headID, v, informTime, cur, maxy);
        return maxy;
    }
};

class Solution {
    long long int mod = 1e9+7;
public:
    int solve(vector<int> &locations, int ind, int finish, int fuel, vector<unordered_map<int,long long int>> &v){\
        if(fuel<0) return 0;
        long long int ans = 0;
        if(v[ind].find(fuel) != v[ind].end()){
            return (v[ind][fuel])%mod;
        }
        if(finish == ind) ans = 1;
        int n = locations.size();
        for(int i = 0; i<n; i++){
            if(i == ind) continue;
            ans = (ans + solve(locations,i,finish,fuel - abs(locations[ind]-locations[i]),v))%mod;
        }
        v[ind][fuel] = ans;
        return ans;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        vector<unordered_map<int,long long int>> v(n);
        v[finish][0] = 1;
        return solve(locations,start,finish,fuel,v);
    }
};

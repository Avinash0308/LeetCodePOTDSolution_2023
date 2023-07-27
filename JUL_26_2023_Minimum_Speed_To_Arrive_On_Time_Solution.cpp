#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool possible(vector<int> &dist, double &hour, int &speed){
        double time = 0;
        int n = dist.size();
        for(int i = 0; i<n-1; i++){
            time += ceil((double)dist[i]/speed);
        }
        time += double(dist[n-1])/speed;
        if(hour>=time) return true;
        else return false;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int ans = -1, min_s = 1, max_s = 1e7, speed;
        while(min_s <= max_s){
            speed = (min_s + max_s)/2;
            if(possible(dist,hour,speed)){
                ans = speed;
                max_s = speed-1;
            }
            else{
                min_s = speed+1;
            }
        }
        return ans;
    }
};
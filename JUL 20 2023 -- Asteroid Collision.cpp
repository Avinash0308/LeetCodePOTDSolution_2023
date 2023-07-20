#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i = 0; i<asteroids.size(); i++){
            if(ans.empty() || asteroids[i] > 0){
                ans.push_back(asteroids[i]);
            }
            else{
                int val = abs(asteroids[i]);
                while(!ans.empty() && ans[ans.size()-1] > 0 && ans[ans.size()-1] < val){
                    ans.pop_back();
                }
                if(!ans.empty() && ans[ans.size()-1] == val){
                    ans.pop_back();
                }
                else if(ans.empty() || ans[ans.size()-1] < 0){
                    ans.push_back(asteroids[i]);
                }
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(unordered_map<int,vector<int>> &m, int ind, vector<int> &courses){
        if(courses[ind]) return courses[ind];
        courses[ind] = -1;
        if(m.find(ind) == m.end()) return courses[ind] = 1;
        else{
            for(auto i : m[ind]){
                if(solve(m,i,courses) == -1) return courses[ind];
            }
            return courses[ind] = 1;
        }
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> m;
        int n = prerequisites.size();
        for(int i = 0; i<n; i++){
            m[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> courses(numCourses);
        for(int i = 0; i<numCourses; i++){
            courses[i] = solve(m,i,courses);
            if(courses[i] == -1) return false;
        }
        return true;
    }
};
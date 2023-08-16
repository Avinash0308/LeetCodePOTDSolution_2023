#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>> p;
        for(int i = 0; i<k-1; i++){
            p.push({nums[i],i});
        }
        vector<int> ans;
        for(int i = k-1; i<n; i++){
            p.push({nums[i],i});
            while(p.top().second < i-k+1){
                p.pop();
            }
            ans.push_back(p.top().first);
        }
        return ans;
    }
};
int main(){
    return 0;
}
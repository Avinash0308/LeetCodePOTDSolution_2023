#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bin(vector<int> &v, int n){
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(v[mid] == 1){low = mid+1;}
            else high = mid-1;
        }
        return low;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> p;
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i<n; i++){
            int pnt = bin(mat[i],m);
            if(p.size() < k){
                p.push({pnt,i});
            }
            else if(p.top().first > pnt){
                p.pop();
                p.push({pnt,i});
            }
        }
        vector<int> ans;
        while(!p.empty()){
            ans.push_back(p.top().second);
            p.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    return 0;
}
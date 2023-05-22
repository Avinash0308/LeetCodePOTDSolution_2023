class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            m[nums[i]]++;
        }
        map<int,vector<int>> p;
        for(auto it:m){
            p[it.second].push_back(it.first);
        }
        auto i = --p.end();
        vector<int> ans;
        while(k){
            for(auto x : i->second){
                ans.push_back(x);
                k--;
                if(!k) break;
            }
            i--;
        }
        return ans;
    }
};

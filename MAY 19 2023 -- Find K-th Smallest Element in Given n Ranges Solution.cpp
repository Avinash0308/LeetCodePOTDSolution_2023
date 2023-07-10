class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        sort(range.begin(),range.end());
        vector<pair<int,int>> v;
        for(int i = 0; i<n; i++){
            int start = range[i][0];
            int end = range[i][1];
            while(i<n-1 && range[i+1][0] <= end){
                end = max(end,range[i+1][1]);
                i++;
            }
            v.push_back({start,end});
        }
        vector<int> ne(queries);
        sort(queries.begin(),queries.end());
        unordered_map<int,int> ans;
        int total_ele = 0;
        int j = 0;
        int i = 0;
        while(i<v.size() && j<q){
            if(total_ele + v[i].second - v[i].first + 1 >= queries[j]){
                ans[queries[j]] = queries[j] - total_ele + v[i].first - 1;
                j++;
            }
            else{
                total_ele += v[i].second - v[i].first + 1;
                i++;
            }
        }
        for(int k = 0; k<q; k++){
            if(ans.find(ne[k]) != ans.end()){
                ne[k] = ans[ne[k]];
            }
            else{
                ne[k] = -1;
            }
        }
        return ne;
    } 
};

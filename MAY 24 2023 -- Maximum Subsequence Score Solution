class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<pair<int,int>> v;
        vector<pair<int,int>> x;
        for(int i = 0; i<n; i++){
            v.push_back({nums2[i],i});
            x.push_back({nums1[i],i});
        }
        sort(v.begin(),v.end());
        sort(x.begin(),x.end());
        long long int cur_sum = 0;
        vector<bool> visit(n);
        for(int i = 0; i<k-1; i++){
            cur_sum += x[n-i-1].first;
            visit[x[n-i-1].second] = true;
        }
        int ind = n-k;
        long long int largest = INT_MIN;
        for(int i = 0; i<=n-k; i++){
            if(!visit[v[i].second]){
                visit[v[i].second] = true;
                largest = max(largest,(cur_sum + nums1[v[i].second])*v[i].first);
            }
            else{
                cur_sum -= nums1[v[i].second];
                while(ind>=0 && visit[x[ind].second]){
                    ind--;
                }
                cur_sum += x[ind].first;
                visit[x[ind].second] = true;
                largest = max(largest,(cur_sum + nums1[v[i].second])*v[i].first);
            }
        }
        return largest;
    }
};

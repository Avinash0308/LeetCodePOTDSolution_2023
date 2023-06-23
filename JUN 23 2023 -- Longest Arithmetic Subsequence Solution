class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<unordered_map<int,int>> v(n);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<i; j++){
                int diff = nums[i]-nums[j];
                v[i][diff] = (v[j].find(diff) != v[j].end())?v[j][diff]+1:2;
                ans = max(ans,v[i][diff]);
            }
        }
        return ans;
    }
};

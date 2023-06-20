class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long int n = nums.size();
        vector<int> ans(n,-1);
        if(n <= 2*k) return ans;
        long long int sum = 0;
        long long int i;
        for(i = 0; i<n && i<2*k+1; i++){
            sum += nums[i];
        }
        for(i = k; i<n-k; i++){
            ans[i] = sum/(2*k + 1);
            sum -= nums[i-k];
            if(i+k+1 < n)sum += nums[i+k+1];
        }
        return ans;
    }
};

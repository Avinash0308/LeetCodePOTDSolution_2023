class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,n+1);
        v[0] = 0;
        for(int i = 0; i<n-1; i++){
            int j = i+1;
            while(j<n && j<=(i+nums[i])){
                v[j] = min(v[j],v[i]+1);
                j++;
            }
        }
        return v[n-1];
    }
};

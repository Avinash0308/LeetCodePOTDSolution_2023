class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long int mod = 1e9+7;
        long long int ans = 0;
        long long int high = nums.size()-1;
        int n = nums.size();
        int po = 1;
        vector<int> v(n+1);
        for(int i =0;i <=n; i++){
            v[i] = po;
            po = (po*2)%mod;
        }
        for(int i = 0; i<nums.size() && nums[i]<=target-nums[i] ; i++){
            long long int low = i;
            long long int val = target-nums[i];
            while(low<=high){
                long long int mid = (low+high)/2;
                if(nums[mid] > val){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            long long int total = v[high-i];
            ans = (ans + total)%mod;
        }
        return ans;
    }
};

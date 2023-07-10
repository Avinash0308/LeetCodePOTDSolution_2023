class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i = 31; i>=0; i--){
            int zero_count = 0, one_count = 0;
            for(int j = 0; j<n; j++){
                if(nums[j] & (1<<i)) one_count++;
                else zero_count++;
            }
            if(one_count%3){
                ans += 1<<i;
            }
        }
        return ans;
    }
};

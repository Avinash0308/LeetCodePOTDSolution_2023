class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int prev = 0 , cur = 0;
        int ans = 0;
        bool zero = false;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                int cur = 1;
                while(i<n-1 && nums[i+1] == 1){
                    i++;
                    cur++;
                }
                ans = max(ans,prev + cur);
                prev = cur;
            }
            else{
                zero = true;
                if(i<n-1 && nums[i+1] == 0){
                    prev = 0;
                }
            }
        }
        return zero?ans:ans-1;
    }
};

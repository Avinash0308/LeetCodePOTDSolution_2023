class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long int val = 0 , start = 0 , miny = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            if(val + nums[i] < target){
                val += nums[i];
            }
            else{
                val += nums[i];
                while(val - nums[start] >= target && start < i){
                    val -= nums[start];
                    start++;
                }
                miny = min(miny,i-start+1);
            }
        }
        if(miny == INT_MAX) return 0;
        else return miny;
    }
};

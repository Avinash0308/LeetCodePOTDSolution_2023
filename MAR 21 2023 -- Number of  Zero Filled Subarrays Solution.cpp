class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){

                long long int cur = 1;
                while(i+1<nums.size() && nums[i+1] == 0){
                    i++;
                    cur++;
                }
                ans += (cur*(cur+1))/2;
            }
        }
        return ans;
    }
};

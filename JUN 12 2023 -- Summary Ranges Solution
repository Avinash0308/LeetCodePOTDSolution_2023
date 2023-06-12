class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int start = nums[i], end = nums[i];
            while(i+1<n && ((long long)nums[i+1]-nums[i] == 1)){
                i++;
                end++;
            }
            string res;
            if(start == end){
                res = to_string(nums[i]);
            }
            else{
                res += to_string(start) + "->" + to_string(end);
            } 
            ans.push_back(res);
        }
        return ans;
    }
};

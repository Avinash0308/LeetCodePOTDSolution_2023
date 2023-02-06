class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(2*n);
        for(int i = 0; i<n ; i++){
            v[i*2] = nums[i];
        }
        int j= 1;
        for(int i = n; i<2*n; i++){
            v[j] = nums[i];
            j+=2;
        }
        return v;
    }
};

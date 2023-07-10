class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> s;
        int miny = INT_MAX;
        int maxy = INT_MIN;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int x = nums[i];
            if(x > maxy){
                maxy = x;
            }
            if(x < miny){
                miny = x;
            }
            while(x%2 == 1){
                x*=2;
            }
            s.insert(x);
        }
        int cur = maxy - miny;
        cur = min(cur , *(s.rbegin()) - *(s.begin()));
        if(cur == 0) return 0;
        while(*(s.rbegin()) %2 == 0){
            int z = *(s.rbegin());
            s.erase(z);
            s.insert(z/2);
            int x = *(s.rbegin());
            int y = *(s.begin());
            cur = min(cur,x-y);
        }
        return cur;
    }
};

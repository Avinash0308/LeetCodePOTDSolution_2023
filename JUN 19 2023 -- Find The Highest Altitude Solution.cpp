class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxy = 0;
        int cur = 0;
        for(int i = 0; i<gain.size(); i++){
            cur += gain[i];
            maxy = max(maxy,cur);
        }
        return maxy;
    }
};

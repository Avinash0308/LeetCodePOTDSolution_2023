class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxy1  = *max_element(candies.begin(),candies.end());
        vector<bool> ans(candies.size());
        for(int i = 0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= maxy1) ans[i] = true;
        }
        return ans;
    }
};

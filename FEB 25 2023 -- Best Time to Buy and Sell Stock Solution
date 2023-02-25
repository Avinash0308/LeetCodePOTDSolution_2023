class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miny = INT_MAX;
        int maxy = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] < miny){
                miny = prices[i];
            }
            else{
                maxy = max(maxy,prices[i]-miny);
            }
        }
        return maxy;
    }
};

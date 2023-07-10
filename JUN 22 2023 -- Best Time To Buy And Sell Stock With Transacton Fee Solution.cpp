class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int buy = 0, sell = 0;
        buy -= prices[0]+fee;
        for(int i = 1; i<n; i++){
            int buy1 = max(buy,sell-prices[i]-fee);
            int sell1 = max(sell,buy+prices[i]);
            buy = buy1;
            sell = sell1;
        }
        return sell;
    }
};

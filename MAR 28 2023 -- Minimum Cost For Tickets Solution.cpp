class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> ans(366);
        vector<int> count(days[n-1]+1,0);
        for(int i = 0; i<n ; i++){
            count[days[i]] = 1;
        }
        for(int i = 1; i<count.size() ; i++){
            if(count[i]){
                ans[i] = min({ans[i-1]+costs[0] , ans[max(i-7,0)]+costs[1], ans[max(i-30,0)]+costs[2]});
            }
            else{
                ans[i] = ans[i-1];
            }
        }
        return ans[days[n-1]];
    }
};

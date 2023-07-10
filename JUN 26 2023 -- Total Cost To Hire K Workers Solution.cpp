class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long total_cost = 0;
        multiset<pair<int,int>> m;
        int n = costs.size();
        int i = 0, j = n-1;
        while(i<=j && candidates>i){
            m.insert({costs[i],1});
            i++; 
        }
        while(i<=j && candidates>n-1-j){
            m.insert({costs[j],2});
            j--;
        }
        while(!m.empty() && k--){
            auto it = m.begin();
            pair<int,int> p = *it;
            m.erase(it);
            total_cost += p.first;
            if(p.second == 1 && i<=j){
                m.insert({costs[i],1});
                i++;
            }
            else if(p.second == 2 && i<=j){
                m.insert({costs[j],2});
                j--;
            }

        }
        return total_cost;
    }
};

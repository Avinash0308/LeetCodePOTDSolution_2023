class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>> p;
        int n = profits.size();
        for(int i = 0; i<n ; i++){
            p.push(make_pair(profits[i],capital[i]));
        }
        for(int i = 0; i<k ;i++){
            int j = 0;
            int len = p.size();
            vector<pair<int,int>> v;
            while(j<len){
                if(p.top().second <= w){
                    w+=p.top().first;
                    p.pop();
                    break;
                }
                else{
                    v.push_back(p.top());
                    p.pop();
                }
                j++;
            }
            if(j == len){
                break;
            }
            for(int f = 0; f<v.size(); f++){
                p.push(v[f]);
            }
        }
        return w;
    }
};

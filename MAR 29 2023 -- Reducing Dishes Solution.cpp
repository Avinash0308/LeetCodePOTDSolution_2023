class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        if(satisfaction[n-1] <= 0) return 0;
        int ind = -1;
        while(ind+1<n && satisfaction[ind+1] < 0){
            ind++;
        }
        int x = 0;
        int sum = 0;
        for(int j = ind+1; j<n ; j++){
            sum += (j-ind-1)*satisfaction[j];
            x += satisfaction[j];
        }
        int maxy = x + sum;
        int cur = 0;
        vector<long long int> neg;
        for(int j = ind; j>=0; j--){
            cur += satisfaction[j];
            neg.push_back(cur);
        }
        cur = 0;
        int some = 2;
        for(int j = 0; j<neg.size(); j++){
            cur += neg[j];
            if(some*x + sum + cur > maxy){
                maxy = some*x + sum + cur;
                some++;
            }
            else{
                break;
            }
        }
        return maxy;
    }
};

class Solution {
public:
    bool it(int cap , vector<int> v , int d){
        int i = 0 ;
        int n = v.size();
        int days = 0;
        while(i<n){
            int cur = 0;
            while(i<n && cur + v[i] <= cap){
                cur+=v[i];
                i++;
            }
            days++;
        }
        if(days <= d) return true;
        else return false;
    }
    int doit(vector<int> v, int d, int low , int high , int &cur){
        if(low<=high){
            int mid = (low+high)/2;
            if(it(mid,v,d)){
                cur = min(cur,mid);
                return doit(v,d,low,mid-1,cur);
            }
            else{
                return doit(v,d,mid+1,high,cur);
            }
        }
        else{
            return cur;
        }
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int n = weights.size();
        int maxi = 0;
        for(int i = 0; i<n ; i++){
            maxi = max(maxi,weights[i]);
            sum += weights[i];
        }
        return doit(weights,days,maxi,sum,sum);
    }
};

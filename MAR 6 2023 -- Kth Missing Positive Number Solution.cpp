class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cur = 0 , val = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]-val-1 + cur >= k){
                return val+k-cur;
            }
            else{
                cur += (arr[i]-val-1);
                val = arr[i];
            }
        }
        return k-cur+val;
    }
};

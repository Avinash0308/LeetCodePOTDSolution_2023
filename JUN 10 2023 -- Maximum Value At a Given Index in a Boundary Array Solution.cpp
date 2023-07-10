class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        maxSum-=n;
        long long int low = 0, high = maxSum;
        while(low<high){
            long long int mid = (low+high+1)/2;
            long long int val1 = max(mid-index,(long long)0);
            long long int ans = (mid+val1) * (mid-val1+1)/2;
            val1 = max(mid-((n-1)-index),(long long)0);
            ans += (mid+val1)*(mid-val1+1)/2;
            ans -= mid;
            if(ans > maxSum){
                high = mid-1;
            }
            else{
                low = mid;
            }
        }
        return low+1;
    }
};

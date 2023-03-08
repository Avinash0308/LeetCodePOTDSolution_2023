class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low = 1 , high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            long long int mid = (high+low)/2;
            long long int total = 0;
            for(long long int i = 0; i<piles.size(); i++){
                total += (piles[i] + mid-1)/mid;
            }
            if(total > h){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};

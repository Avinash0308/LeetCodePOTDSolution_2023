class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long start = 0 , end = 1e14 + 7;
        while(start<=end){
            long long mid = (start+end)/2;
            long long total = 0;
            for(int i = 0; i<time.size(); i++){
                total += (mid/time[i]);
            }
            if(totalTrips > total){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return start;
    }
};

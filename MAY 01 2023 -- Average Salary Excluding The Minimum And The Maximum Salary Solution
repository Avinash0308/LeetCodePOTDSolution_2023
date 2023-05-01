class Solution {
public:
    double average(vector<int>& salary) {
        double miny = INT_MAX , maxy = INT_MIN;
        double total = 0;
        int n = salary.size();
        for(int i = 0; i<n; i++){
            double salar = salary[i];
            miny = min(miny,salar);
            maxy = max(maxy,salar);
            total += salar;
        }
        double ans = total - maxy - miny;
        return ans/(n-2);
    }
};

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double tilt;
        double x = coordinates[0][0], y = coordinates[0][1], x1 = coordinates[1][0], y1 = coordinates[1][1];
        if(x > x1){
            tilt = (x-x1)/(y-y1);
        }
        else{
            tilt = (x1-x)/(y1-y);
        }
        int n = coordinates.size();
        for(int i = 2; i<n; i++){
            x1 = coordinates[i][0], y1 = coordinates[i][1];
            double tilt1;
            if(x > x1){
                tilt1 = (x-x1)/(y-y1);
            }
            else{
                tilt1 = (x1-x)/(y1-y);
            }
            if(tilt1 != tilt) return false;
        }
        return true;
    }
};

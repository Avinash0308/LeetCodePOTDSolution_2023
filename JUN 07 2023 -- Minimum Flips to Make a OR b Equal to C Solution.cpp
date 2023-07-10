class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        while(a || b || c){
            int cm = c%2, am = a%2, bm = b%2;
            if((cm == 1 && am == 0 && bm == 0)) count++;
            else if(cm == 0 && am == 1 && bm == 1) count+=2;
            else if(cm == 0 && (am || bm)) count++;
            c/=2;
            a/=2;
            b/=2;
        }
        return count;
    }
};

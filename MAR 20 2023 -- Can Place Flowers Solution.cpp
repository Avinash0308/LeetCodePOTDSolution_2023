class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        for(int i = 0; i<flowerbed.size() && n; i++){
            if(flowerbed[i] == 0){
                if((i == flowerbed.size()-1 || flowerbed[i+1] == 0) && ((i>0 && flowerbed[i-1] == 0) || i == 0)){
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return !n;
    }
};

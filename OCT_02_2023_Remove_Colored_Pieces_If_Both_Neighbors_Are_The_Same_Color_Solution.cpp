#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool winnerOfGame(string colors) {
        signed int alice = 0;
        signed int n = colors.size();
        for(int i = 0; i<n; i++){
            signed int start = i;
            while(i<n-1 && colors[i+1] == colors[i])i++;
            if(colors[i] == 'A') alice += max(0,i-start-1);
            else alice -= max(0,i-start-1);;
        }
        return alice > 0;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestGoodInteger(string num) {
        int maxy = -1;
        int n = num.size();
        for(int i = 0; i<n-2; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                maxy = max(maxy,num[i]-'0');
                i+=2;
            }
        }
        if(maxy == -1) return "";
        string ans;
        for(int i= 0; i<3; i++){
            ans.push_back(char(maxy+48));
        }
        return ans;
    }
};
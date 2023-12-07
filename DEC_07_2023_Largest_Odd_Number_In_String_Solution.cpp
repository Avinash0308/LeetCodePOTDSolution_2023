#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size()-1; i>=0; i--){
            if((num[i]-'0')%2 == 1){
                string ans = num.substr(0,i+1);
                return ans;
            }
        }
        return "";
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> num(10);
        int c = 0;
        for(int i = 2; i<10; i++){
            for(int j = 0; j<3; j++,c++){
                num[i].push_back(char(97+c));
            }
            if(i ==7 || i == 9){
                num[i].push_back(char(97+c));
                c++;
            }
        }
        vector<string> ans;
        ans.push_back("");
        int s = digits.size();
        for(int i = 0; i<s; i++){
            vector<string> cur;
            int n = num[digits[i]-'0'].size();
            int siz = ans.size();
            for(int j = 0; j<siz; j++){
                for(int k = 0; k<n; k++){
                    string str = ans[j];
                    str.push_back(num[digits[i]-'0'][k]);
                    cur.push_back(str);
                }
            }
            ans = cur;
        }
        return ans;
    }
};
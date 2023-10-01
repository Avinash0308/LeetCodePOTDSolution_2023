#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        for(int i = 0; i<n; i++){
            while(i<n && s[i] == ' ') i++;
            int start = i;
            while(i<n && s[i] != ' ') i++;
            int end = i-1;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};
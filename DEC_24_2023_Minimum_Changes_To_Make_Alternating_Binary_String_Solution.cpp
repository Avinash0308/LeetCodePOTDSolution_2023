#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int find(string &s, int ind, char c){
        if(ind >= s.size()) return 0;
        char next = (c == '0')?'1':'0';
        return (c == s[ind]) + find(s,ind+1,next);
    }
    int minOperations(string s) {
        int n = s.size();
        int op = find(s,0,'0');
        op = min(op,find(s,0,'1'));
        return op;
    }
};
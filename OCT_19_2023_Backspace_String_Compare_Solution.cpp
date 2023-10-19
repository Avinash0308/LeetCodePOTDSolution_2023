#include<bits/stdc++.h>
using namespace std;
class Solution {
    bool check(int &n, int &m, string &s, string &t){
        if(n<0 && m>=0 || m<0 && n>=0) return true;
        if(n<0 && m<0) return false;
        if(s[n] == t[m]){
            n--;
            m--;
            return false;
        }
        return true;
    }
    int get_index(string &s, int n){
        if(n<0 || s[n] != '#') return n;
        int val = 0;
        while(n>=0 && (val || s[n] == '#')){
            if(s[n] == '#') val++;
            else val--;
            n--;
        }
        return n;
    }
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size()-1, m = t.size()-1;
        while(n>=0 || m>=0){
            n = get_index(s,n);
            m = get_index(t,m);
            if(check(n,m,s,t)) return false;
        }
        return !check(n,m,s,t);
    }
};
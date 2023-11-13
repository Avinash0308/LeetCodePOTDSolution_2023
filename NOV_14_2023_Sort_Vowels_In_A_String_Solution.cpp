#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check_vowel(char c){
        vector<int> vowel = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i = 0; i<10; i++){
            if(c == vowel[i]) return true;
        }
        return false;
    }
    string sortVowels(string s) {
        int n = s.size();
        string vow;
        for(int i = 0; i<n; i++){
            if(check_vowel(s[i])) vow.push_back(s[i]);
        }
        sort(vow.begin(),vow.end());
        int j = 0; 
        for(int i = 0; i<n;i ++){
            if(check_vowel(s[i])){
                s[i] = vow[j];
                j++;
            }
        }
        return s;
    }
};
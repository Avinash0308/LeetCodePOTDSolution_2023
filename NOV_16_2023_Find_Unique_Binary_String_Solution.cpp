#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i = 0; i<n; i++){
            long long int num = 0;
            long long int cur = 1;
            for(int j = n-1; j>=0; j--){
                if(nums[i][j] == '1'){
                    num += cur;
                }
                cur*=2;
            }
            m[num]++;
        }
        for(long long int i = 0; i<n; i++){
            if(m.count(i) == 0){
                
                string ans;
                int num = i;
                while(num){
                    if(num%2){
                        ans += "1";
                    }
                    else{
                        ans += "0";
                    }
                    num/=2;
                }
                while(ans.size()<n){
                    ans += "0";
                }
                reverse(ans.begin(),ans.end());
                return ans;
            }
        }
        string ans;
        while(n){
            if(n%2){
                ans += "1";
            }
            else{
                ans += "0";
            }
            n/=2;
        }
        while(ans.size()<nums.size()){
            ans += "0";
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
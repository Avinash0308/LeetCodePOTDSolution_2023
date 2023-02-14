class Solution {
public:
    string addBinary(string a, string b) {
        int n = max(a.size(),b.size()) + 1;
        vector<int> ans(n);
        int z = n-1;
        int i = a.size()-1 , j= b.size()-1;
        while(i>=0 && j>=0){
            int aa = ans[z] + ((int)a[i]) - 48 + ((int)b[j]) - 48;
            if(aa == 1){
                ans[z] = 1;
            }
            else if(aa == 2){
                ans[z] = 0;
                ans[z-1] = 1;
            }
            else if(aa == 0){
                ans[z] = 0;
            }
            else{
                ans[z] =1 ;
                ans[z-1] = 1;
            }
            i--;
            j--;
            z--;
        }
        while(i>=0){
            int aa = ans[z] + (int)a[i] - 48;
            if(aa == 0){
                ans[z] = 0;
            }
            else if(aa == 1){
                ans[z] = 1;
            }
            else{
                ans[z] = 0;
                ans[z-1] = 1;
            }
            i--;
            z--;
        }
        while(j>=0){
            int aa = ans[z] + (int)b[j] - 48;
            if(aa == 0){
                ans[z] = 0;
            }
            else if(aa == 1){
                ans[z] = 1;
            }
            else{
                ans[z] = 0;
                ans[z-1] = 1;
            }
            j--;
            z--;
        }
        string s;
        i = 0;
        while(i<n && ans[i] == 0){
            i++;
        }
        if(i == n){
            s.push_back('0');
            return s;
        }
        while(i<n){
            if(ans[i] == 1){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
            i++;
        }
        return s;
    }
};

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        if(k == 0) return num;
        vector<int> v;
        while(k){
            v.push_back(k%10);
            k/=10;
        }
        reverse(num.begin(),num.end());
        vector<int> ans;
        int rem = 0 , i = 0 , j = 0;
        while(i<num.size() && j<v.size()){
            int x = rem + num[i] + v[j];
            ans.push_back(x%10);
            rem = x/10;
            i++;
            j++;
        }
        while(i<num.size()){
            int x = rem + num[i];
            ans.push_back(x%10);
            rem = x/10;
            i++;
        }
        while(j<v.size()){
            int x = rem + v[j];
            ans.push_back(x%10);
            rem = x/10;
            j++;
        }
        if(rem){
            ans.push_back(rem);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

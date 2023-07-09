class Solution {
public:
    int largestVariance(string s) {
        int ans = 0, n = s.size();
        for(char i = 'a'; i<='z'; i++){
            for(char j = 'a'; j<='z'; j++){
                if(i == j) continue;
                int a = 0, b = 0, c = 0, d = 0;
                for(int k = 0; k<n; k++){
                    if(s[k]==i){
                        a++;
                    }
                    if(s[k] == j){
                        b++;
                    }
                    if(s[n-k-1] == i){
                        c++;
                    }
                    if(s[n-k-1] == j){
                        d++;
                    }
                    if(a && b) ans = max(ans,a-b);
                    if(c && d) ans = max(ans,c-d);
                    if(b > a){
                        a = 0;
                        b = 0;
                    }
                    if(d > c){
                        c = 0;
                        d = 0;
                    }
                }
            }
        }
        return ans;
    }
};

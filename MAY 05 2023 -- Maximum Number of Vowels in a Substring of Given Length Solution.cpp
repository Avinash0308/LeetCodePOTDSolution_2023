class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int maxy = 0;
        for(int i = 0; i<k; i++){
            if(s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u'){
                maxy++;
            }
        }
        int cur = maxy;
        for(int i = k; i<n; i++){
            char c = s[i-k];
            if(c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'u'){
                cur--;
            }
            c = s[i];
            if(c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'u'){
                cur++;
            }
            maxy = max(maxy,cur);
        }
        return maxy;
    }
};

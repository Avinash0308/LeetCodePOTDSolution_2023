class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> v(26);
        vector<int> x(26);
        for(int i = 0; i<s1.size(); i++){
            x[s1[i]-'a']++;
            v[s2[i]-'a']++;
        }
        bool u = true;
        for(int i = 0; i<26; i++){
            if(x[i] != v[i]){
                u = false;
                break;
            }
        }
        if(u == true){
            return u;
        }
        for(int i = s1.size(); i<s2.size(); i++){
            v[s2[i-s1.size()] - 'a']--;
            v[s2[i] - 'a']++;
            int j = 0;
            while(j<26){
                if(x[j] != v[j]){
                    break;
                }
                j++;
            }
            if(j == 26){
                return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size() > s.size()) return ans;
        vector<int> v(26);
        for(int j = 0; j<p.size(); j++){
            v[p[j] - 'a']++;
        }
        int i = 0;
        vector<int> v2(26);
        for(; i<p.size(); i++){
            v2[s[i] - 'a']++;
        }
        if(v == v2){
            ans.push_back(0);
        }  
        for(; i<s.size(); i++){
            v2[s[i-p.size()] - 'a']--;
            v2[s[i] - 'a']++;
            if(v == v2){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int partitionString(string s) {
        vector<int> count(26,-1);
        int ans = 0;
        int cur = 0;
        for(int i = 0; i<s.size(); i++){
            if(cur>count[s[i]-'a']){
                count[s[i]-'a'] = i;
            }
            else{
                ans++;
                cur = i;
                count[s[i]-'a'] = i;
            }
        }
        ans++;
        return ans;
    }
};

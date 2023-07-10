class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.size(), m = goal.size();
        bool can = false;
        vector<int> sim(26);
        if(n != m) return false;
        int dis = 0;
        char a, b;
        for(int i = 0; i<n; i++){
            if(goal[i] != s[i]){
                dis++;
                if(dis == 1){
                    a = goal[i];
                    b = s[i];
                }
                else if(dis == 2){
                    if(goal[i] != b || s[i] != a) return false;
                }
                else{
                    return false;
                }
            }
            sim[s[i]-'a']++;
            if(sim[s[i]-'a'] == 2){
                can = true;
            }
        }
        if(dis == 1) return false;
        else if(dis == 2)return true;
        else if(can ) return true;
        else return false;
    }
};

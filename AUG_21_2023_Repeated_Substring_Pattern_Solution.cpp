class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        string cur;
        for(int i = 0; i<n-1; i++){
            cur.push_back(s[i]);
            int siz = n-i-1;
            if(siz % cur.size() == 0){
                bool can = true;
                for(int j = i+1; j<n; j+=cur.size()){
                    string str = s.substr(j,cur.size());
                    if(str != cur){
                        can = false;
                        break;
                    }
                }
                if(can) return can;
            }
        }
        return false;
    }
};

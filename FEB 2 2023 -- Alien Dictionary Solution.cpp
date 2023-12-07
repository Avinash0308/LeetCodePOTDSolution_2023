class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        if(words.size() == 1) return true;
        vector<int> v(26);
        for(int i = 0; i<26; i++){
            v[order[i]-'a'] = i;
        }
        for(int i = 1; i<words.size(); i++){
            int j = 0;
            while(words[i][j] == words[i-1][j] && j<words[i].size() && j<words[i-1].size()){
                j++;
            }
            if(j<words[i-1].size() && j==words[i].size()){
                return false;
            }
            if(j<words[i-1].size() && j<words[i].size() &&v[words[i-1][j] - 'a'] > v[words[i][j] - 'a'] ){
                return false;
            } 
        }
        return true;
    }
};

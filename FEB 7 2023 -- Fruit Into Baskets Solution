class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int max_fr = 0;
        vector<int> v(2,-1);
        int last = -1;
        int len = 0;
        int last_len = 0;
        for(int i = 0; i<fruits.size(); i++){
            if(fruits[i] == v[0] || fruits[i] == v[1]){
                len++;
                int cur = 1;
                while(i<fruits.size()-1 && fruits[i] == fruits[i+1]){
                    i++;
                    cur++;
                    len++;
                }
                last_len = cur;
                max_fr = max(max_fr,len);
            }
            else if(v[0] == -1 || v[1] == -1){
                if(v[0] == -1) v[0] = fruits[i];
                else v[1] = fruits[i];

                len++;
                int cur = 1;
                while(i<fruits.size()-1 && fruits[i] == fruits[i+1]){
                    i++;
                    cur++;
                    len++;
                }
                last_len = cur;
                max_fr = max(max_fr,len);
            }
            else{
                len = last_len;
                v[0] = fruits[i-1];
                v[1] = fruits[i];
                len++;
                int cur = 1;
                while(i<fruits.size()-1 && fruits[i] == fruits[i+1]){
                    i++;
                    cur++;
                    len++;
                }
                last_len = cur;
                max_fr = max(max_fr,len);
            }
        }
        return max_fr;
    }
};

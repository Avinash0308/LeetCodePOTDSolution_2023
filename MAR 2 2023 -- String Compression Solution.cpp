class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        for(int j = 0; j<chars.size(); j++){
            int val = 1;
            while(j<chars.size()-1 && chars[j] == chars[j+1]){
                j++;
                val++;
            }
            if(val == 1){
                chars[i] = chars[j];
                i++;
            }
            else{
                chars[i] = chars[j];
                int v = log10(val) + 1;
                i+=v;
                int x = i;
                while(val){
                    chars[x] = char(val%10+48);
                    x--;
                    val/=10;
                }
                i++;
            }
        }
        return i;
    }
};

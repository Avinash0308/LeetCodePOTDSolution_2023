class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int maxy = 0, t = 0, f = 0;
        queue<int> tr, fr;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i] == 'T'){
                t++;
                if(fr.size() == k){
                    f = i-fr.front();
                    fr.pop();
                }
                else{
                    f++;
                }
                fr.push(i);
            }
            else{
                f++;
                if(tr.size() == k){
                    t = i-tr.front();
                    tr.pop();
                }
                else{
                    t++;
                }
                tr.push(i);
            }
            maxy = max({maxy,t,f});
        }
        return maxy;
    }
};

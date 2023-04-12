class Solution {
public:
    string simplifyPath(string path) {
        stack<char> dk;
        for(int i = 0; i<path.size(); i++){
            if(path[i] == '/'){
                if(dk.empty() || dk.top() != '/'){
                    dk.push(path[i]);
                }
            }
            else if(path[i] == '.'){
                int count = 1;
                int dot = 1;
                int j = i;
                while(i+1<path.size() && path[i+1] != '/'){
                    if(path[i+1] == '.') dot++;
                    i++;
                    count++;
                }
                if(count>2 || (count == 2 && dot<2)){
                    for(int k = j; k<=i; k++){
                        dk.push(path[k]);
                    }
                }
                else if(count == 1 && !dk.empty()){
                    dk.pop();
                }
                else{
                    int c = 0;
                    while(!dk.empty() && c<2){
                        if(dk.top() == '/') c++;
                        dk.pop();
                    }
                }
            }
            else{
                dk.push(path[i]);
                while(i+1 < path.size() && path[i+1] != '/'){
                    dk.push(path[i+1]);
                    i++;
                }
            }
        }
        if(!dk.empty() && dk.top() == '/' && dk.size() > 1)dk.pop();
        string ans;
        while(!dk.empty()){
            ans += dk.top();
            dk.pop();
        }
        if(ans.empty()) ans+='/';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

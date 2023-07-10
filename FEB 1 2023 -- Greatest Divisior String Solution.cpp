class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string x;
        string ans;
        bool t = false;
        for(int i  = 0; i<str1.size(); i++){
            x.push_back(str1[i]);
            if(str1.size()%x.size() == 0){
                string z = x;
                for(int j = 1; j<(str1.size()/x.size()); j++){
                    z += x;
                }
                if(z == str1){
                    if(str2.size() % x.size() == 0){
                        string z = x;
                        for(int j =1 ; j<(str2.size()/x.size()); j++){
                            z += x;
                        }
                        if(z == str2) ans = x;
                    }
                }
            }
        }
        return ans;
    }
};

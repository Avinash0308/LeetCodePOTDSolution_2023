class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
        if(needle.length() > haystack.length()) return -1;
        for(int i = 0; i<=(haystack.length()-needle.length()); i++){
            string x = haystack.substr(i,len);
            if(x == needle) return i;
        }
        return -1;
    }
};

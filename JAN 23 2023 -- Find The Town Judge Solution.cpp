class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0 && n == 1) return 1; // if there is only one person i.e. n == 1 and trust array is empty we will return 1 becuase 1 is only person and chief also;
        vector<pair<int,int>> trusts(n+1); // vector of pair to store the count of person that trust any person and number of people he trusts;
        for(int i = 0; i<trust.size() ; i++){ // traversing each element of 2d vector;
            trusts[trust[i][0]].second++; // increamenting the count of person trust[i][0] follows by 1;
            trusts[trust[i][1]].first++; // incrementing the count of person that follows trust[i][1];
        }
        // the program states that the chief will be followed by everyone except himself thus if the count of person following him is n-1 and also if he not follows anyone he is the chief and we will return the index of that person;
        for(int i = 1; i<=n ; i++){ // traversing the array from 1 to n;
            if(trusts[i].first == n-1 && trusts[i].second == 0){ // checking the condition mentioned above ;
                return i; // return current index if condition holds true;
            }
        }
        return -1; // if none of the person stands the condition return -1;
    }
};

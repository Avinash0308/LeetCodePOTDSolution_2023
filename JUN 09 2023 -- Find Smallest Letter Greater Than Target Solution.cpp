class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0, j = letters.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(target < letters[mid]) j = mid-1;
            else i = mid+1;
        }
        if(i < letters.size() && letters[i] > target) return letters[i];
        else return letters[0];
    }
};

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i = 0 , j = people.size()-1;
        int ans = 0;
        while(i<=j){
            if(i == j){
                ans++;
                i++;
                j--;
            }
            else{
                if(people[i]+people[j] <= limit){
                    ans++;
                    i++;
                    j--;
                }
                else{
                    j--;
                    ans++;
                }
            }
        }
        return ans;
    }
};

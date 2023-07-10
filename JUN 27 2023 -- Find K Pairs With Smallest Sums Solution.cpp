class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,vector<int>>> s;
        for(int i = 0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                int val = nums1[i] + nums2[j];
                if(s.size()<k )s.push({val,{nums1[i],nums2[j]}});
                else if(s.top().first > val){
                    s.pop();
                    s.push({val,{nums1[i],nums2[j]}});
                }
                else{
                    break;
                }
            }
        }
        vector<vector<int>> ans;
        while(!s.empty()){
            vector<int> ss= s.top().second;
            ans.push_back(ss);
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

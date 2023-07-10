class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        unordered_map<int,int> s;
        int n=  nums2.size();
        for(int i = 0; i<n; i++){
            m[nums2[i]]++;
        }
        vector<vector<int>> ans(2);
        int x = nums1.size();
        for(int i = 0; i<x; i++){
            if(m.find(nums1[i]) == m.end()){
                ans[0].push_back(nums1[i]);
                m[nums1[i]] = 1;
            }
            s[nums1[i]]++;
        }
        for(int i = 0; i<n; i++){
            
            if(s.find(nums2[i]) == s.end()){
                ans[1].push_back(nums2[i]);
                s[nums2[i]] = 1;
            }
        }
        return ans;
    }
};

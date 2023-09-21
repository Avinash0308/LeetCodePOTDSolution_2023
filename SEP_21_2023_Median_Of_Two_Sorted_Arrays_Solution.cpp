#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(2);
        int cur = -1;
        int i = 0, j = 0, n = nums1.size(), m = nums2.size();
        int req1 = (n+m)/2, req2 = (n+m-1)/2;
        while(i<n && j<m){
            cur++;
            if(nums1[i] <= nums2[j]){
                if(cur == req1){
                    ans[0] = nums1[i];
                }
                if(cur == req2){
                    ans[1] = nums1[i];
                }
                i++;
            }
            else{
                if(cur == req1){
                    ans[0] = nums2[j];
                }
                if(cur == req2){
                    ans[1] = nums2[j];
                }
                j++;
            }
        }
        while(i<n){
            cur++;
            if(cur == req1){
                ans[0] = nums1[i];
            }
            if(cur == req2){
                ans[1] = nums1[i];
            }
            i++;
        }
        while(j<m){
            cur++;
            if(cur == req1){
                ans[0] = nums2[j];
            }
            if(cur == req2){
                ans[1] = nums2[j];
            }
            j++;
        }
        return (double(ans[0]+ans[1]))/2;
    }
};
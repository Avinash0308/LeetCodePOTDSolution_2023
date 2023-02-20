class Solution {
public:
    int search (vector<int> v , int i  , int j , int tar){
        if(i >= j){
            return i;
        }
        int mid = (j+i)/2;
        if(v[mid] == tar) return mid;
        if(v[mid] > tar) return search(v,i,mid-1,tar);
        else return search(v,mid+1,j,tar);
    }
    int searchInsert(vector<int>& nums, int target) {
        int m = search(nums,0,nums.size()-1,target);
        if(nums[m] >= target) return m;
        return m+1;
    }
};

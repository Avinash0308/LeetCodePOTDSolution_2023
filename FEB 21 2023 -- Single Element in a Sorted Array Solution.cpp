class Solution {
public:
    int me(vector<int>&nums , int low , int high){
        int mid = (low+high)/2;
        if(mid>0 && nums[mid] == nums[mid-1]){
            if(mid%2){
                return me(nums,mid+1,high);
            }
            else{
                return me(nums,low,mid-2);
            }
        }
        else if(mid < nums.size()-1 && nums[mid] == nums[mid+1]){
            if(mid % 2 == 0){
                return me(nums,mid+2,high);
            }
            else{
                return me(nums,low,mid-1);
            }
        }
        else{
            return nums[mid];
        }
    }
    int singleNonDuplicate(vector<int>& nums) {
        return me(nums,0,nums.size()-1);
    }
};

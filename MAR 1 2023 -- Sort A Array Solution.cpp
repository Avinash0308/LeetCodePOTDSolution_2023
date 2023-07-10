class Solution {
public:
    void sortit(vector<int> &v, int low , int mid , int high){
        int i = low, j = mid+1;
        vector<int> cur;
        while(i<=mid && j<=high){
            if(v[i] < v[j]){
                cur.push_back(v[i]);
                i++;
            }
            else{
                cur.push_back(v[j]);
                j++;
            }
        }
        while(i<=mid){
            cur.push_back(v[i]);
            i++;
        }
        while(j<=high){
            cur.push_back(v[j]);
            j++;
        }
        for(int k = low ; k<=high ; k++){
            v[k] = cur[k-low];
        }
    }
    void merge(vector<int> &v , int low ,int high){
        if(low<high){
            int mid = (low+high)/2;
            merge(v,low,mid);
            merge(v,mid+1,high);
            sortit(v,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        merge(nums,0,nums.size()-1);
        return nums;
    }
};

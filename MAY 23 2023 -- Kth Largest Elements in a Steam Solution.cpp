class KthLargest {
    int ind;
    multiset<int> m;
    multiset<int> :: iterator it;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            m.insert(nums[i]);
        }
        ind = k;
        it = m.end();
    }
    
    int add(int val) {
        m.insert(val);
        if(it == m.end()){
            while(ind--){
                it--;
            }
        }
        else if(val >= *it){
            it++;
        }
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

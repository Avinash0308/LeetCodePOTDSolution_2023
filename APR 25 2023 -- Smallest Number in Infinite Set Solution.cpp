class SmallestInfiniteSet {
private:
    vector<int> v;
    int small = INT_MAX;
public:
    SmallestInfiniteSet() {
        v.resize(1001,1);
        small = 1;
    }
    
    int popSmallest() {
        while(small<=1000 && !v[small]){
            small++;
        }
        if(small>1000) return -1;
        else{
            v[small] = 0;
            return small;
        }
    }
    
    void addBack(int num) {
        v[num] = 1;
        small = min(small,num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

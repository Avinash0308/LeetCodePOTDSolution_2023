class SnapshotArray {
    vector<unordered_map<int,int>> v;
    int sna = 0;
public:
    SnapshotArray(int length) {
        v.resize(length);
    }
    
    void set(int index, int val) {
        v[index][sna] = val;
    }
    
    int snap() {
        sna++;
        return sna-1;
    }
    
    int get(int index, int snap_id) {
        if(v[index].empty()) return 0;
        while(v[index].find(snap_id) == v[index].end() && snap_id>=0){
            snap_id--;
        }
        if(snap_id == -1) return 0;
        return v[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */

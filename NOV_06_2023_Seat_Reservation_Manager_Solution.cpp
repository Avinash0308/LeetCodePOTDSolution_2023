#include<bits/stdc++.h>
using namespace std;
class SeatManager {
    priority_queue<int,vector<int>,greater<int>> s;
public:
    SeatManager(int n) {
        for(int i = 1; i<=n; i++) s.push(i);
    }
    
    int reserve() {
        if(s.empty()) return -1;
        int seat = s.top();
        s.pop();
        return seat;
    }
    
    void unreserve(int seatNumber) {
        s.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
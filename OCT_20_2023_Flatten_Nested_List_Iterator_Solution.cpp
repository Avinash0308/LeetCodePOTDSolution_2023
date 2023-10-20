#include<bits/stdc++.h>
using namespace std;
/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
    vector<int> ans;
    int ind = 0;
    void flatten(vector<NestedInteger> &v, int i, int n){
        if(i >= n) return;
        if(v[i].isInteger()){
            ans.push_back(v[i].getInteger());
        }
        else{
            flatten(v[i].getList(),0,v[i].getList().size());
        }
        flatten(v,i+1,n);
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        flatten(nestedList,0,nestedList.size());
    }  
    
    int next() {
        return ans[ind++];
    }
    
    bool hasNext() {
        return ind<ans.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
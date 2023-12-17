#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    int a = 0, b = 0, c = 0;
	    for(int i = n-1; i>=0; i--){
	        int val = max(b,c) + arr[i];
	        c = b;
	        b = a;
	        a = val;
	    }
	    return max({a,b,c});
	}
};
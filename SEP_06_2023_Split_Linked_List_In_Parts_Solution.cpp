#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        int len = 0;
        ListNode* cur = head;
        while(cur){
            len++;
            cur = cur->next;
        }
        cur = head;
        int val = k;
        for(int j = 0; j<k && cur; j++){
            int cur_siz = len/(k-j) + (len%(k-j) != 0);
            len -= cur_siz;
            ans[j] = cur;
            for(int i = 1; i<cur_siz; i++){
                cur = cur->next;
            }
            ListNode* next = cur->next;
            cur->next = NULL;
            cur = next;
        }
        return ans;
    }
};
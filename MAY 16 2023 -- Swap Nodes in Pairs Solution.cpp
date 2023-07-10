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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !(head->next)) return head;
        ListNode * prev = NULL;
        ListNode * h = head;
        ListNode * ans;
        while(h && h->next){
            ListNode * next = h->next->next;
            ListNode * temp = h->next;
            h->next->next = h;
            h->next = next;
            if(prev){
                prev->next = temp;
            }
            else{
                ans = temp;
            }
            prev = h;
            h = h->next;
        }
        return ans;
    }
};

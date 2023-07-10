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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head, *fast = head;
        int n = 0;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            n++;
        }
        if(fast){
            n = (n*2)+1;
        }
        else{
            n*=2;
        }
        int a = k , b = n-k+1;
        ListNode* first, *second;
        slow = head;
        n = 1;
        while(slow){
            if(n == a){
                first = slow;
            }
            if(n == b){
                second = slow;
            }
            n++;
            slow = slow->next;
        }
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
        return head;
    }
};

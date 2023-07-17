#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverse(ListNode *h)
    {
        ListNode *prev = NULL;
        ListNode *next;
        while (h)
        {
            next = h->next;
            h->next = prev;
            prev = h;
            h = next;
        }
        return prev;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode *cur = NULL;
        ListNode *head = NULL;
        int rem = 0;
        ListNode *h;
        int val;
        while (l1 && l2)
        {
            val = l1->val + l2->val + rem;
            h = new ListNode(val % 10);
            if (cur)
            {
                cur->next = h;
                cur = cur->next;
            }
            else
            {
                head = h;
                cur = h;
            }
            rem = val / 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            val = l1->val + rem;
            h = new ListNode(val % 10);
            cur->next = h;
            cur = cur->next;
            rem = val / 10;
            l1 = l1->next;
        }
        while (l2)
        {
            val = l2->val + rem;
            h = new ListNode(val % 10);
            cur->next = h;
            cur = cur->next;
            rem = val / 10;
            l2 = l2->next;
        }
        while (rem)
        {
            h = new ListNode(rem % 10);
            cur->next = h;
            cur = cur->next;
            rem /= 10;
        }
        head = reverse(head);
        return head;
    }
};
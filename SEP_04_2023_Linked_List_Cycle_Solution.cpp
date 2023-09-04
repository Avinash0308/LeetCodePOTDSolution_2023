#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (!head || !head->next)
            return false;
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next)
        {
            if (slow == fast)
                return true;
            fast = fast->next->next;
            slow = slow->next;
        }
        return false;
    }
};
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* one = NULL, *head1 = NULL, *two = NULL, *head2 = NULL;
        ListNode* t = head;
        while(t){
            if(t->val >= x){
                if(two){
                    two->next = t;
                    t = t->next;
                    two = two->next;
                    two->next = NULL;
                }
                else{
                    two = t;
                    t = t->next;
                    two->next = NULL;
                    head2 = two;
                }
            }
            else{
                if(one){
                    one->next = t;
                    t = t->next;
                    one = one->next;
                    one->next = NULL;
                }
                else{
                    one = t;
                    t = t->next;
                    one->next = NULL;
                    head1 = one;
                }
            }
        }
        if(head1){
            one->next = head2;
            return head1;
        }
        else{
            return head2;
        }
    }
};
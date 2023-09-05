#include<bits/stdc++.h>
using namespace std;class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node * h = head;
        while(h){
            Node * next = h->next;
            h->next = new Node(h->val);
            h->next->next = next;
            h = h->next->next;
        }
        h = head;
        while(h){
            if(h->random)h->next->random = h->random->next;
            h = h->next->next;
        }
        h = head;
        Node * ans = h->next;
        Node * fin = ans;
        h->next = h->next->next;
        h = h->next;
        while(h && ans){
            ans->next = ans->next->next;
            h->next = h->next->next;
            ans = ans->next;
            h = h->next;
        }
        return fin;
    }
};
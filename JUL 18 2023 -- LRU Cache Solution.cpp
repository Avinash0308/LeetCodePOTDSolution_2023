#include<bits/stdc++.h>
using namespace std;
class listt
{
public:
    listt *prev;
    listt *next;
    int val;
    int key;
    
    listt(){
        prev = next = NULL;
        val = key = -1;
    }
    listt(int val, int key){
        prev = next = NULL;
        this->val = val;
        this->key = key;
    }
};
class LRUCache
{
private:
    listt* head;
    listt* tail;
    unordered_map<int,listt*> m;
    int size;
    int ind;
public:
    LRUCache(int capacity)
    {
        // Write your code here
        size = capacity;
        head = NULL;
        tail = NULL;
        ind = 0;
    }

    int get(int key)
    {
        // Write your code here
        if(m.find(key) == m.end()) return -1;
        listt* list = m[key];
        if(head == list){
            return head->val;
        }
        if(list == tail){
            tail = tail->prev;
        }
        if(list->prev){
            list->prev->next = list->next;
        }
        if(list->next){
            list->next->prev = list->prev;
        }
        list->next = head;
        list->prev = NULL;
        if(list->next)list->next->prev = list;
        head = list;
        if(tail == NULL) tail = head;
        m[key] = head;
        return head->val;
    }
    void put(int key, int value)
    {
        // Write your code here
        if(m.find(key) == m.end()){
            if(ind == size){
                listt* rem = tail;
                int key = rem->key;
                tail = tail->prev;
                if(tail) tail->next = NULL;
                else{
                    head = NULL;
                }
                delete rem;
                m.erase(key);
                ind--;
            }
            ind++;
            listt* cur = new listt(value,key);
            cur->next = head;
            cur->prev = NULL;
            if(head){
                head->prev = cur;
            }
            else{
                tail = cur;
            }
            head = cur;
        }
        else{
            listt* list = m[key];
            if(list == head){
                head = head->next;
            }
            if(list == tail){
                tail = tail->prev;
            }
            if(list->prev){
                list->prev->next = list->next;
            }
            if(list->next){
                list->next->prev = list->prev;
            }
            list->next = head;
            list->prev = NULL;  
            list->val = value;
            if(list->next)list->next->prev = list;
            if(tail == NULL) tail = list;
            head = list;
        }
        m[key] = head;
    }
};

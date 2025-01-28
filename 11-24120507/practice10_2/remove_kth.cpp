#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "remove_kth.h"

using namespace std;    

Node* find_kthFromTail(List list,int k) {
    Node* p = list.head;;
    if(!p) return NULL;
    for (; p ; p = p->next) {
        k--;
        if(k == 1) break;
    }
    if(k > 1) return NULL;
    return p;
}

void remove_kth(List &list,int k) {
    Node *cur = find_kthFromTail(list,k);
    if(!cur) {
        cout << "List size < k" << endl;
        return;
    }
    Node *p = list.head;
    Node *prev = NULL;
    for (; cur ; cur = cur->next) 
        if(!cur->next) {
            if(!prev) {
                list.head = p->next;
                delete p;
                return;
            }
            else {
                prev->next = p->next;
                delete p;
                return;
            }
        }
        else {
            prev = p;
            p = p->next;
        }
}
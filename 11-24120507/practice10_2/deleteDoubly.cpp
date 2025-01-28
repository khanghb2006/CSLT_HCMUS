#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include"struct.h"
#include"deleteDoubly.h"

using namespace std;

void deleteDoubly(List &list) {
    Node* cur = list.head;
    while(cur && cur->next) {
        Node* p = cur->next;
        Node* prev = cur;
        while(p) {
            if(p->value == cur->value) {
                prev->next = p->next;
                delete p;
                p = prev->next;
            }
            else {
                prev = p;
                p = p->next;
            }
        }
        cur = cur->next;
    }
}
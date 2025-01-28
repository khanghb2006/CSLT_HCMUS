#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include"struct.h"
#include "removeAll.h"

using namespace std;

void removeAll(Doubly_List &list) {
    Doubly_Node* p2 = NULL;
    for (Doubly_Node* p1 = list.head; p1;) {
        p2 = p1->next;
        delete p1;
        p1 = p2;
    }
    list.head = NULL;
    list.tail = NULL;
}
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "initialize.h"
#include "Add_Element.h"
#include "Delete_Element.h"
#include "findElement.h"

using namespace std;

Doubly_Node* findElement_value(Doubly_List list, long long val) {
    Doubly_Node* cur = list.head;
    while (cur != NULL) {
        if (cur->val == val) {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

Doubly_Node* findElement_ith(Doubly_List list, int pos) {
    Doubly_Node* cur = list.head;
    for (int i = 1; i < pos; i++) {
        if (cur == NULL) {
            return NULL;
        }
        cur = cur->next;
    }
    return cur;
}
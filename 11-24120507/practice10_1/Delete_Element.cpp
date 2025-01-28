#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "initialize.h"
#include "Add_Element.h"
#include "Delete_Element.h"
#include "findElement.h"

using namespace std;

void DeleteHead(Doubly_List &list) {
    if(!list.head) return;
    Doubly_Node* tmp = list.head;
    list.head = list.head->next;
    if(list.head) list.head->prev = NULL;
    else list.tail = NULL;
    free(tmp);
}

void DeleteTail(Doubly_List &list) {
    if(!list.tail) return;
    Doubly_Node* tmp = list.tail;
    list.tail = (list.tail)->prev;
    if(list.tail) (list.tail)->next = NULL;
    else list.head = NULL;
    delete tmp;
}

void Delete_ith(Doubly_List &list, int pos) {
    Doubly_Node* Node_ith = findElement_ith(list, pos);
    if (!Node_ith) return;
    if (Node_ith == list.head) DeleteHead(list);
    if (Node_ith == list.tail) DeleteTail(list);
    (Node_ith->prev)->next = Node_ith->next;
    (Node_ith->next)->prev = Node_ith->prev;
    delete Node_ith;
}
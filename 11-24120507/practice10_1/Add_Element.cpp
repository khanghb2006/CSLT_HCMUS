#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "initialize.h"
#include "Add_Element.h"
#include "Delete_Element.h"
#include "findElement.h"

using namespace std;

void addHead(Doubly_List &list, int val) {
    if(!list.head) {
        list.head = list.tail = new Doubly_Node{val,NULL,NULL};
        return;
    }
    list.head = new Doubly_Node{val,list.head,NULL};
    list.head->next->prev = list.head;
    return;   
}

void addTail(Doubly_List& list, int val) {
    if(!list.tail) {
        list.head = list.tail = new Doubly_Node{val,NULL,NULL};
        return;
    }
    list.tail = new Doubly_Node{val,NULL,list.tail};
    list.tail->prev->next = list.tail;
    return;
}

void addAfter_ith(Doubly_List& list,int val,int pos) {
    Doubly_Node *newNode = (Doubly_Node*)malloc(sizeof(Doubly_Node));
    newNode->val = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    Doubly_Node *Node_ith = findElement_ith(list,pos);

    if(!Node_ith) {
        cout << "Can not add" << endl;
        return;
    }

    newNode->next = Node_ith->next;
    Node_ith->next = newNode;
    newNode->prev = Node_ith;
    if(newNode->next) 
        (newNode->next)->prev = newNode;
    free(newNode);
}
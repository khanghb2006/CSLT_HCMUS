#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include"struct.h"
#include"Add_Element.h"

using namespace std;

void AddHead(List &list,int val) {
    list.head = new Node {val,list.head};
}

void AddTail(List &list,int val) {
    Node* newNode = new Node {val,NULL};
    if(!list.head) {
        list.head = newNode;
        return;
    }
    Node* cur = list.head;
    int t = 0;
    for (;cur;) {
        if(!cur->next) {
            cur->next = newNode;
            return;
        }
        else cur = cur->next;
    }
    delete newNode;
}

void AddAfter_ith(List &list,int val,int pos) {
    Node* newNode = new Node {val,NULL};
    Node* cur = list.head;
    for(int i = 1;i < pos;i++) {
        if(!cur) {
            cout << "Can not add" << endl;
            return;
        }
        cur = cur->next;
    }
    newNode->next = cur->next;
    cur->next = newNode;
    delete newNode;
}
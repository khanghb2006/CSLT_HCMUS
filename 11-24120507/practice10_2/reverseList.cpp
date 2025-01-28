#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include"struct.h"
#include"Add_Element.h"
#include"reverseList.h"

using namespace std;

List reverseList(List list) {
    if(!list.head) return list;
    List newList;

    newList.head = NULL;

    for (Node* p = list.head; p; p = p->next)
        AddHead(newList,p->value);
    // list = newList;
    return newList;
}

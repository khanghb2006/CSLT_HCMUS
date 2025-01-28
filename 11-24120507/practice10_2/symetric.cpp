#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "reverseList.h"
#include "Add_Element.h"
#include "symetric.h"

using namespace std;

bool is_symetric(List list) {
    List newList = reverseList(list);
    Node* p1 = list.head;
    Node* p2 = newList.head;
    for (; p1 && p2; p1 = p1->next, p2 = p2->next) 
        if(p1->value != p2->value) return false;
    return true;
}
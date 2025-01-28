#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "isEmpty.h"
#include "initialize.h"
#include "Add_Element.h"
#include "Delete_Element.h"
#include "findElement.h"

using namespace std;

int main() {
    Doubly_List list;

    // Initialize list
    Initialize(list);

    // Check empty list
    isEmpty(list);

    // Add element to list
    addHead(list, 1);
    addTail(list, 2);
    addAfter_ith(list, 1, 3);

    // Remove element from list
    DeleteHead(list);
    DeleteTail(list);
    Delete_ith(list, 1);

    // Find element in list
    findElement_ith(list, 1);
    findElement_value(list, 2); 

    // Print List
    
    for (Doubly_Node* p = list.head; p != NULL; p = p->next) {
        cout << p->val << " ";
    }
}
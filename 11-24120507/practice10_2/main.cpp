#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "symetric.h"
#include "reverseList.h"
#include "Add_Element.h"
#include "deleteDoubly.h"
#include "remove_kth.h"

using namespace std;

int main() {
    List list;
    list.head = NULL;

    //Add Element
    AddHead(list,1);
    AddTail(list,1);
    AddAfter_ith(list,1,2);

    // Reverse List
    reverseList(list);

    //Remove duplicate nodes(keep one node).
    deleteDoubly(list);

    //Remove kth node from the Tail
    remove_kth(list,1);

    //Check if the list is symetric
    is_symetric(list);
}
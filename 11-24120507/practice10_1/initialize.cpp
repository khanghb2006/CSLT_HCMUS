#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
#include "initialize.h"
#include "Add_Element.h"
#include "Delete_Element.h"
#include "findElement.h"

using namespace std;

void Initialize(Doubly_List &list) {
    list.head = NULL;
    list.tail = NULL;
}
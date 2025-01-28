#include<iostream>
#include<stdio.h>
#include<stdlib.h>  

#include "struct.h"
#include "isEmpty.h"

using namespace std;

bool isEmpty(Doubly_List list) {
    if(!list.head) return true;
    return false;
}
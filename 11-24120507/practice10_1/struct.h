#pragma once
#include <iostream>
#include <stdio.h>  
#include <stdlib.h>

using namespace std;

struct Doubly_Node {
    long long val;
    Doubly_Node *next;
    Doubly_Node *prev;
};

struct Doubly_List {
    Doubly_Node *head = NULL;
    Doubly_Node *tail = NULL;
};
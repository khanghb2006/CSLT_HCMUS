#pragma once
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"

using namespace std;

Doubly_Node* findElement_value(Doubly_List list, long long val);
Doubly_Node* findElement_ith(Doubly_List list, int pos);
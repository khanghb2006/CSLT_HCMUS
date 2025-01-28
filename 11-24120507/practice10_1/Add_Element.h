#pragma once
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "findElement.h"

using namespace std;

void addHead(Doubly_List &list, int val);
void addTail(Doubly_List &list, int val);
void addAfter_ith(Doubly_List &list, int val, int pos);
#pragma once
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"
#include "findElement.h"

using namespace std;

void DeleteHead(Doubly_List &list);
void DeleteTail(Doubly_List &list);
void Delete_ith(Doubly_List &list, int pos);
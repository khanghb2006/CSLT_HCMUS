#pragma once
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#include "struct.h"

using namespace std;

void AddHead(List &list,int val);
void AddTail(List &list,int val);
void AddAfter_ith(List &list,int val,int pos);
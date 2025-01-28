#pragma once

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node {
    int value;
    Node* next;
};

struct List {
    Node* head;
};
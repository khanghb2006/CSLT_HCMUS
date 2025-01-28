#include<iostream>
#include<stdio.h>
#include "ascending.h"

using namespace std;

bool ascending(int a[],int &n) {
    for (int i = 2; i <= n; i++) 
        if(a[i] < a[i - 1]) return false;
    return true;
}
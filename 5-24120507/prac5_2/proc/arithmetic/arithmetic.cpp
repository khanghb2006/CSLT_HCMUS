#include<iostream>
#include<stdio.h>
#include "arithmetic.h"

bool arithmetic(int a[],int &n) {
    int d = a[2] - a[1];
    for (int i = 3; i <= n; i++) 
        if(a[i] - a[i - 1] != d) return false;
    return true;
}
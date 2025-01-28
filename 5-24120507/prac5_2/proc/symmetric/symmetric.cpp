#include<iostream>
#include<stdio.h>
#include "symmetric.h"

using namespace std;

bool symmetric(int a[],int &n) {
    for (int i = 1; i <= (n >> 1); i++) 
        if(a[i] != a[n - i + 1]) return false;
    return true;
}
#include<iostream>
#include<stdio.h>
#include "proc\proc.h"
#include "proc\ascending\ascending.h"
#include "proc\symmetric\symmetric.h"
#include "proc\arithmetic\arithmetic.h"

using namespace std;

const int mxN = 1e5;

int main() {
    int n;
    int a[mxN];
    input(a,n);
    output(a,n);
    return 0;
}
#include<iostream>
#include<string>
#include<stdio.h>

#include "proc/proc.h"
#include "proc/getfrac/getfrac.h"
#include "proc/changestring/changestring.h"

using namespace std;

const int mxN = 1e4 + 7;

int main() {
    int n;
    FractionPointer frac;
    input(frac,n);
    output(frac,n);
}
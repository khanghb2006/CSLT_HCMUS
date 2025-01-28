#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>

using namespace std;

struct fraction {
    int numerator;
    int denominator;
    bool ok_frac;
};

typedef struct fraction * FractionPointer;

void input(FractionPointer &frac,int &n);

void output(FractionPointer &frac,int &n);
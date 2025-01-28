#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

struct date {
    int day;
    int month;
    int year;
};

void input(date a[],int &n);
void output(date a[],int &n);
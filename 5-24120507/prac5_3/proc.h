#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

struct student {
    string id;
    string name;
    double math;
    double lit;
    double gpa;
};

void input(student a[],int &n);
void output(student a[],int &n);
#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

using namespace std;

bool isword(char x) {
    return isalpha(x) || isdigit(x);
}

bool check(char *ptr,char *s,char *t) {
    char x = *(ptr + strlen(t));
    // cout << x << "\n";
    if(!isspace(x) || isword(x)) return false;
    if(ptr == s) return true;
    x = *(ptr - 1);
    if(!isspace(x) || isword(x)) return false;
    return true;
}
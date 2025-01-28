#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<ctype.h>

#include "proc.h"
#include "check/check.h"

using namespace std;

const int mxN = 10000;

void input(char *&s,char *&t,char *&r) {
    char temp[mxN];
    cout << "Enter a sentence = ";
    cin.getline(temp,mxN);
    s = new char[strlen(temp) + 1];
    strcpy(s,temp);

    cout << "Enter find word = ";
    cin.getline(temp,mxN);
    t = new char[strlen(temp) + 1];
    strcpy(t,temp);

    cout << "Enter replacing word = ";
    cin.getline(temp,mxN);
    r = new char[strlen(temp) + 1];
    strcpy(r,temp);
}

void output(char *&s,char *&t,char *&r) {
    int faul = 0;
    char *S = s;
    for (char *ptr = S; ptr = strstr(S,t); S = ptr + strlen(t))
        ++faul;
    int diff = strlen(t) > strlen(r) ? strlen(t) - strlen(r) : strlen(r) - strlen(t);
    char *ans = new char[strlen(s) + diff * faul + 1];
    int len = 0;
    char *p = s;
    // cout << check(p,s,t) << "\n";
    // cout << s << "\n";
    // cout << t << "\n";
    // cout << r << "\n";
    for (char *ptr = p; (ptr = strstr(p,t)); p = ptr + strlen(t)) {
        strncpy(ans + len,p,ptr - p);
        len += ptr - p;
        if(check(ptr,s,t)) {
            strcpy(ans + len,r);
            len += strlen(r);
        }
        else {
            strcpy(ans + len,t);
            len += strlen(t);
        }
        // cout << check(ptr,s,t) << "\n";
    }
    strcpy(ans + len,p);
    cout << ans;
    delete[] ans;
}
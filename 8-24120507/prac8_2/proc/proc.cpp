#include<iostream>
#include<string.h>
#include<ctype.h>

#include"proc.h"

using namespace std;

int const mxN = 1000;

void input(char *&s) {
    char temp[mxN];
    cout << "Enter a sentence = ";
    cin.getline(temp,mxN);
    s = new char[strlen(temp) + 1];
    strcpy(s,temp);
}

void output(char *&s) {
    char t [] {"-0123456789"};
    char *p = s;
    int len = 0;
    char *ans = new char [mxN];
    for (char *ptr = p; ptr = strpbrk(p,t);) {
        if(strspn(p,t)) {
            char *Num = new char[strspn(p,t) + 1];
            strncpy(Num,ptr,strspn(p,t));
            // long long num = 0;
            // for (int j = 0; j < strspn(p,t); ++j) 
            //     num = num * 10 + (*(ptr + j) - '0');
            // ++num;
            // int times = 0;
            // long long tmp = num;
            // while(tmp) {++times,tmp /= 10;}
            // char r[times];
            // r[times] = '\0';
            // while(num) {
            //     int a = num % 10;
            //     num /= 10;
            //     r[--times] = a + '0';
            // }
            // strcpy(ans + len,r);
            // len += strlen(r);
            itoa(strtod(Num,NULL) + 1,Num,10);
            strcpy(ans + len,Num);
            len += strlen(Num);
        }
        // cout << strspn(p,t) << "\n";
        // cout << *ptr << " " << *(ptr + 1) << "\n";
        strncpy(ans + len,p,ptr - p);
        len += ptr - p;
        p = ptr + strspn(p,t);
    }
    strcpy(ans + len,p);
    cout << ans;
    delete[] ans;
}
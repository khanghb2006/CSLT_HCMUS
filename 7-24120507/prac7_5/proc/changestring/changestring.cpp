#include<iostream>
#include<stdio.h>
#include<sstream>
#include<string>

#include "changestring.h"

using namespace std;

string change(long long x) {
    string s = "";
    while(x) {
        s += ((x % 10) + '0');
        x /= 10;
    }
    string t = "";
    for (int i = (int) s.size() - 1; i >= 0; i--)
        t += s[i];
    return t;
}
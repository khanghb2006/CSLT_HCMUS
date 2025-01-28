#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>

#include "getfrac.h"

using namespace std;

bool is_digit(char x) {
    if(x == '0' || x == '1') return true;
    if(x == '2' || x == '3') return true;
    if(x == '4' || x == '5') return true;
    if(x == '6' || x == '7') return true;
    if(x == '8' || x == '9') return true;
    return false;
}

long long getfrac_numerator(string s) {
    long long ans = 0;
    for (char x : s) {
        if(x == '/') break;
        if(is_digit(x)) ans = ans * 10 + (x - '0');
    }
    return ans;
}

long long getfrac_denominator(string s) {
    long long ans = 0;
    int p = 0;
    for (int i = 0; i < (int) s.size(); i++) 
        if(s[i] == '/') p = i;
    for (int i = p + 1; i < (int) s.size(); i++) 
        if(is_digit(s[i])) ans = ans * 10 + (s[i] - '0');
    return ans;
}
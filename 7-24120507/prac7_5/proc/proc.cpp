#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>

#include "proc.h"
#include "getfrac/getfrac.h"
#include "changestring\\changestring.h"

using namespace std;

int gcd(int a,int b) {
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    return a;
}

bool ok_fraction(char x) {
    if(x == '/') return true;
    if(x == '0' || x == '1') return true;
    if(x == '2' || x == '3') return true;
    if(x == '4' || x == '5') return true;
    if(x == '7' || x == '6') return true;
    if(x == '9' || x == '8') return true;
    return false;
}

void input(FractionPointer &frac,int &n) {
    cout << "Number of fractions = " << ' ';
    // frac -> numerator;
    cin >> n;
    frac = new fraction[n];
    for (int i = 0; i < n; i++) {
        string s;
        cout << "Fraction " << i << " = " << " ";
        cin >> s;
        frac[i].ok_frac = true;
        for (char x : s) if(!ok_fraction)
            (frac + i) -> ok_frac = false;
        (frac + i) -> numerator = getfrac_numerator(s);
        (frac + i) -> denominator = getfrac_denominator(s);
        if(!(frac + i) -> denominator) (frac + i) -> ok_frac = false;
    }
}

void output(FractionPointer &frac,int &n) {
    string s[n + 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) s[i] = "";
    for (int i = 0; i < n; i++) if((frac + i) -> ok_frac) {
        int x = (frac + i) -> numerator;
        int y = (frac + i) -> denominator;
        int z = gcd(x,y);
        x /= z,y /= z;
        string t = change(x);
        t += '/';
        t += change(y);
        bool diff = true;
        for (int i = 0; i < cnt; i++) 
            if(s[i] == t) diff = false;
        if(diff) {
            s[cnt++] = t;
            cout << (frac + i) -> numerator << '/' << (frac + i) -> denominator << " ";
        }
    }
}
#include<stdio.h>
#include<iostream>
#include<string>
#include "proc.h"

using namespace std;

void input(string &s) {
    cout << "Enter S = " << "\n";
    getline(cin,s);
}

void output(string &s) {
    char c = ' ';
    for (int i = 0; i < (int) s.size(); i++) {
        if(s[i] == ' ' && c == ' ') continue;
        if(s[i] == ' ' && i == (int) s.size() - 1) continue;
        if(s[i] == ' ' && s[i + 1] == ' ') continue;
        cout << s[i];   
        c = s[i];
    }
}
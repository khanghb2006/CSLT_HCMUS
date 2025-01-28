#include<iostream>
#include<math.h>
#include<stdio.h>
#include<sstream>
#include "4_2.h"

using namespace std;

char temp[1005];

void proc2() {
    int a,b;char c;
    cout << "Enter 2 positive integers " << "\n";
    cin >> a >> b;
    cout << "Enter an operator " << "\n";
    cin >> c;
    if(c == '/') {
        if(!b) cout << "Error : divided by zero";
        else cout << "Result = " << a / b;
    }
    else {
        if(c == '+') cout << "Result = " << a + b;
        else if(c == '-') cout << "Result = " << a - b;
        else cout << "Result = " << a * b;
    }
}
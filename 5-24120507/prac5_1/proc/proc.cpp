#include<iostream>
#include<stdio.h>
#include "proc.h"
#include "isPrime\isPrime.h"

using namespace std;

void input(int a[],int &n) {
    cout << "Enter N = ";
    cin >> n;
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << " = " << "\n";
        cin >> a[i];
    }
}

void output(int a[],int &n) {
    int nev = 0,prime = 0;
    for (int i = 0; i < n; i++) {
        nev += (a[i] < 0);
        prime += isPrime(a[i]);
    }
    cout << "Negative numbers : " << nev << "\n";
    cout << "Prime numbers : " << prime << "\n";
}
#include<iostream>
#include<stdio.h>
#include "proc.h"
#include "ascending\ascending.h"
#include "symmetric\symmetric.h"
#include "arithmetic\arithmetic.h"

using namespace std;

void input(int a[],int &n) {
    cout << "Enter N = " << "\n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter element " << i << " =" << "\n";
        cin >> a[i];
    }
}

void output(int a[],int &n) {
    if(ascending(a,n)) cout << "Array is ascending" << "\n";
    else cout << "Array is not ascending " << "\n";
    if(symmetric(a,n)) cout << "Array is symmetric" << "\n";
    else cout << "Array is not symmetric" << "\n";
    if(arithmetic(a,n)) cout << "Array is arithmetic" << "\n";
    else cout << "Array is not arithmetic" << "\n";
}
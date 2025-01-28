#include<iostream>
#include<stdio.h>

#include "proc.h"
#include "left\left.h"
#include "right\right.h"

using namespace std;

void input(int a[][200],int &n,int &m) {
    cout << "Enter N,M = ";
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}

void output(int a[][200],int &n,int &m) {
    cout << "Rotate left matrix 90 degree" << "\n";
    left(a,n,m);
    cout << "Rotate right maxtrix 90 degree" << "\n";
    right(a,n,m);
}
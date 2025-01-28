#include<iostream>
#include<stdio.h>

#include "proc.h"
#include "matrix\matrix.h"

using namespace std;

void input(int a[][200],int &n,int &m) {
    cout << "Enter n,m" << "\n";
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];
}

void output(int a[][200],int &n,int &m) {
    matrix(a,n,m);
}
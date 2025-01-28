#include<iostream>
#include<stdio.h>

#include "right.h"

using namespace std;

void right(int a[][200],int &n,int &m) {
    int b[max(n,m) + 1][max(n,m) + 1];
    int u = n;
    for (int i = 1; i <= n; i++) {
        int v = 1;
        for (int j = 1; j <= m; j++) {
            b[v][u] = a[i][j];
            v++;
        }
        u--;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) cout << b[i][j] << " ";
        cout << "\n";
    }
}
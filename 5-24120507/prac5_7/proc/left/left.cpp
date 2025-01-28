#include<iostream>
#include<stdio.h>

#include "left.h"

using namespace std;

void left(int a[][200],int &n,int &m) {
    int b[max(n,m) + 1][max(n,m) + 1];
    int u = 0;
    for (int i = 1; i <= n; i++) {
        u++;
        int v = 1;
        for (int j = m; j >= 1; j--) {
            b[v][u] = a[i][j];
            v++;
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) cout << b[i][j] << " ";
        cout << "\n";
    }
}
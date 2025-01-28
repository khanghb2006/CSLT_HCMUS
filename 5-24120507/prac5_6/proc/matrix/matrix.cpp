#include<iostream>
#include<stdio.h>

#include"matrix.h"

using namespace std;

void matrix(int a[][200],int &n,int &m) {
    for (int j = 1; j <= n; j++) {
        int sum = 0;
        for (int i = 1; i <= n; i++) sum += a[i][j];
        for (int i = 1; i <= n; i++) if(sum - a[i][j] == a[i][j]) cout << a[i][j] << " ";
        cout << "\n";
    }
}

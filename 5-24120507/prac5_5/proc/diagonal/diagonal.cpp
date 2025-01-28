#include <iostream>
#include <stdio.h>
#include "diagonal.h"

int mdiagonal(int a[][200],int &n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i][i];
    return sum;
}

int adiagonal(int a[][200],int &n) {
    int sum = 0;
    for (int j = n,i = 1; i <= n; i++) 
        sum += a[i][j],j--;
    return sum;
}
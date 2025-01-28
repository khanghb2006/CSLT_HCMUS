#include <iostream>
#include <stdio.h>

#include "magic.h"

using namespace std;

bool magic(int a[][200],int &n) {
    int Const = 0;
    for (int i = 1; i <= n; i++) Const += a[1][i];
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) sum += a[i][j];
        if(sum != Const) return false;
    }
    for (int j = 1; j <= n; j++) {
        int sum = 0;
        for (int i = 1; i <= n; i++) sum += a[i][j];
        if(sum != Const) return false;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += a[i][i];
    if(sum != Const) return false;
    for (int j = n,i = 1; i <= n; i++) sum += a[i][j];
    if(sum != Const) return false;
    return true;
}
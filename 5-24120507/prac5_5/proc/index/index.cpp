#include <iostream>
#include <stdio.h>
#include "index.h"

using namespace std;

int maxindex(int a[][200],int &n) {
    int mx = -1e9,pos = 1;
    for (int j = 1; j <= n; j++) {
        int sum = 0;
        for (int i = 1; i <= n; i++) sum += a[i][j];
        if(sum > mx) {
            mx = sum;
            pos = j;
        }
    }
    return pos;
}
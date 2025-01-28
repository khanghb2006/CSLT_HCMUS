#include <iostream>
#include <stdio.h>

#include "proc.h"
#include "diagonal\diagonal.h"
#include "index\index.h"
#include "magic\magic.h"

using namespace std;

void input(int a[][200],int &n) {
    cout << "Enter N = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) cin >> a[i][j];
}

void output(int a[][200],int &n) {
    cout << "Sum of main diagonal = " << mdiagonal(a,n) << "\n";
    cout << "Sum of anti diagonal = " << adiagonal(a,n) << "\n";
    cout << "Row index having max sum is " << maxindex(a,n) << "\n";
    if(magic(a,n)) cout << "It is a magic square" << "\n";
    else cout << "It is not a magic square" << "\n";
}
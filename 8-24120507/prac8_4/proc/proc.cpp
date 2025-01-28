#include<iostream>

#include"proc.h"

using namespace std;

int getid(int x,int y,int n) {
    return (x - 1) * n + y;
}

void input(int *&a,int &n,int &m) {
    cin >> n >> m;
    a = new int[n * m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> *(a + getid(i,j,n));
}

void output(int *&a,int &n,int &m) {
    cout << *(a + getid(2 - 1,4 - 1,n));
}
#include <iostream>
#include "proc.h"
#include<fstream>

using namespace std;

void input(fstream &f, int a[][1000],int &n,int &m){
    f >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            f >> a[i][j];
    f.close();
}
void rleft(int a[][MAX_N], ll &M, ll &N) {
    int b[MAX_N][MAX_N] = {0};
    for (ll i = N - 1; i >= 0; i --)
        for (ll j = 0; j < M; j ++)
            b[N - 1 - i][j] = a[j][i];
    for(int i = 0; i < MAX_N; i ++)
        for(int j = 0; j < MAX_N; j ++)
            a[i][j] = 0;
    for (ll i = 0; i < N; i ++)
        for (ll j = 0; j < M; j ++)
            a[i][j] = b[i][j];
    std::swap(M, N);
}
void output(fstream &F, int a[][1000],int &n,int &m){
    F << m << " " << n << "\n";
     int b[m + 1][n + 1];
	F << m << " " << n << "\n";
	int v = 0;
	for (int i = 0; i < n; i++) {
		int u = m - 1;
		for (int j = 0; j < m; j++) {
			b[u][v] = a[i][j];
			u--;
		}
		v++;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) F << b[i][j] << " ";
		F << "\n";
	}
    F.close();
}
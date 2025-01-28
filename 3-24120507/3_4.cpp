#include<bits/stdc++.h>
using namespace std;

int main() {
	cout << "Enter a positive interger N";
	int n;
	cin >> n;
	long long frac = 1,s = 0;
	long double pi = 1,ln = 1;
	for (int i = 1; i <= n; i++) frac = frac * i;
	for (int i = 2; i <= n; i++)
		if(i % 2 == 0) ln -= 1.00 * 1 / i;
		else ln += 1.00 * 1 / i;
	bool turn = 0;
	for (int i = 3; i <= 2 * n + 1; i += 2)
		if(turn) pi += 1.00 * 1 / i,turn = !turn;
		else pi -= 1.00 * 1 / i,turn = !turn;
	for (int i = 1; i * i <= n; i++)
		s += (i * i);
	cout << "!N = " << frac << "\n";
	cout << "ln(2) = " << ln << "\n";
	cout << "PI = " << pi * 4 << "\n";
	cout << "S = " << s << "\n";
}
#include<bits/stdc++.h>

using namespace std;

int main() {
	int p,q;
	cout << "Enter p,q ";
	cin >> p >> q;
	double a1 = sqrt(1.00 * pow(p,6) / 27 + 1.00 * pow(q,2) / 4);
	double a = pow(a1 - 1.00 * q / 2,1.00 * 1 / 3);
	double b = pow(a1 + 1.00 * q / 2,1.00 * 1 / 3);
	cout << "Solution = ";
	cout << fixed << setprecision(10) << 1.00 * a - 1.00 * b << "\n";
}
#include<bits/stdc++.h>

using namespace std;

int a,b,c;

int main() {
	cout << "Enter coefficients a,b,c ";
	cin >> a >> b >> c;
	int delta = b * b - 4 * a * c;
	if(delta < 0) cout << "No solution!";
	else if(delta == 0) {
		cout << "Solution 1 = " << -b / (2 * a);
	}
	else {
		cout << "Solution 1 = " << (-b + sqrt(delta)) / (2 * a) << "\n";
		cout << "Solution 2 = " << (-b - sqrt(delta)) / (2 * a) << "\n";
	}
}
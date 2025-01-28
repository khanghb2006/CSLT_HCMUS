#include<bits/stdc++.h>

using namespace std;

int main() {
	cout << "Enter two interger" << "\n";
	int a,b;
	cin >> a >> b;
	cout << "Enter an operator" << "\n";
	string c;
	cin >> c;
	if(c != "/") {
		cout << "Result =";
		if(c == "+") cout << a + b;
		else if(c == "-") cout << a - b;
		else cout << a * b;
	}
	else {
		if(!b) cout << "Error : divided by zero";
		else {
			cout << "Result = ";
			cout << a / b;
		}
	}
}
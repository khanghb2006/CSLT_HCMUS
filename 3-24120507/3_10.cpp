#include<bits/stdc++.h>

using namespace std;
char temp[1005];

int gcd(int a,int b) {
	while(a != b) {
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

int lcm(int a,int b) {
	return a * b / gcd(a,b);
}

int main() {
	int a,b;
	do {
		std :: cout << "Enter 2 positive integers a,b ";
		std :: cin.getline(temp,1000);
	}while(std :: stringstream(temp) >> a >> b && (a <= 0 || b <= 0));
	cout << "GCD = " << gcd(a,b) << "\n";
	cout << "LCM = " << lcm(a,b) << "\n";
}
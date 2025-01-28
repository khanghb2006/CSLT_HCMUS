#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

bool isPrime(int n) {
	if(n < 2) return false;
	for (int i = 2; i * i <= n; i++)
		if(n % i == 0) return false;
	return true;
}

int main() {
	fstream f("NUMBER.TXT",ios::in);
	fstream F("PRIME.TXT",ios::out);
	if(!f) {
		cout << "Error" << "\n";
		exit(0);
	}
	int n;
	while(f >> n) {
		if(isPrime(n)) F << n << " ";
	}
	f.close();
	F.close();
	// cerr << isPrime(117);
}
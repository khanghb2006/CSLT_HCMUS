#include<bits/stdc++.h>

using namespace std;

char temp[1005];

bool prime(int n) {
	for (int i = 2; i * i <= n; i++) 
		if(n % i == 0) return false;
	return true;
}

int main() {
	int n;int t = 0;
	do {
		std :: cout << "Enter a positive integer N ";
		std :: cin.getline(temp,1000);
	}while(std :: stringstream(temp) >> n && n < 0);
	// cout << n << "\n";
	for (int i = 2; i <= n; i++) 
		if(prime(i)) {
			t++;
			cout << "#" << t << " = " << i << "\n";
		} 
	if(t == 1) cout << "There is " << t << " prime number";
	else cout << "There are " << t << " prime numbers";
}
#include<bits/stdc++.h>
using namespace std;

long long n;
int a[1005];
char temp[1005];

int main() {
	do {
		std :: cout << "Enter a positive integer N ";
		std :: cin.getline(temp,1000);
	}while(std :: stringstream(temp) >> n && n < 0);
	int t = 0;
	while(n) {
		t++;
		a[t] = n % 10;
		n /= 10;
	}
	bool decrease = true,symmetric = true;
	for (int i = 2; i <= t; i++) 
		if(a[i] > a[i - 1]) decrease = false;
	for (int i = 1; i <= n / 2; i++)
		if(a[i] != a[n - i + 1]) symmetric = false;
	if(decrease) cout << "Descending" << '\n';
	else cout << "Not descending" << '\n';
	if(symmetric) cout << "Symmetric" << '\n';
	else cout << "Not symmetric" << '\n';
}
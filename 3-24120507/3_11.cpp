#include<bits/stdc++.h>
using namespace std;

int a[100];
char temp[1005];

int main() {
	int n,m;
	do {
		std :: cout << "Enter integer N and positive integer M ";
		std :: cin.getline(temp,1000);
	}while(std :: stringstream(temp) >> n >> m && m < 0);
	int t = 0;
	while(n) {	
		t++;
		a[t] = n % 2;
		n /= 2;
		if(t == m) break;
	}
	cout << "The first " << m << " bits from the right of " << n << ':'; 
	if(t != m) 
		for (int i = 1; i <= m - t; i++) cout << '0';
	for (int i = t; i >= 1; i--) cout << a[i];
}
#include<bits/stdc++.h>

using namespace std;
char temp[1005];
int main() {
	int a = 0;
	int t = 1;
	int mx = 0,mn = 1e9;
	do {
		if(a == 0 && temp[0] == '0') break;
		std :: cout << "Number " << t << " = ";
		std :: cin.getline(temp,1000);
		if(mx < a && a > 0) mx = a;
		if(mn > a && a > 0) mn = a;
	}while((std :: stringstream(temp) >> a),(a < 0 ? t : ++t));
	cout << "Max = " << mx << "\n";
	cout << "Min = " << mn << "\n";
}
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cout << "Registration number = ";
	cin >> n;
	int lucky = 0;
	while(n) {
		lucky += (n % 10);
		n /= 10;
		if(lucky >= 10) lucky -= 10;
	}
	cout << "Lucky number = " << lucky << "\n";
	return 0;
}
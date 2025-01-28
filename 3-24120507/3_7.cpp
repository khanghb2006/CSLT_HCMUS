#include<bits/stdc++.h>
using namespace std;

char temp[1005];

int main() {
	int a,b;
	do {
		std :: cout << "Enter old and new kWh ";
		std :: cin.getline(temp,1000);
	}while(std :: stringstream(temp) >> a >> b && a > b);
	int tmp = b - a;
	if(tmp < 100) cout << "1549 d";
	else if(tmp < 150) cout << "1600" << "d";
	else if(tmp < 200) cout << "1858" << "d";
	else if(tmp < 300) cout << "2340" << "d";
	else if(tmp < 400) cout << "2615" << "d";
	else cout << "2710" << "d";
}
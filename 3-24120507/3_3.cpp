#include<bits/stdc++.h>
using namespace std;

int main() {
	cout << "Enter month and year = ";
	int month,year;
	cin >> month >> year;
	if(month == 2) {
		if(year % 4 == 0) 
			cout << "Month 2 in year " << year << " " << "has 29 days";
		else cout << "Month 2 in year " << year << " " << "has 28 days";
	}
	else if(month == 4 || month == 6 || month == 9 || month == 1) {
		cout << "Month " << month <<" in year " << year << " has 30 days";
	}
	else cout << "Month " << month <<" in year " << year << " has 31 days";
}
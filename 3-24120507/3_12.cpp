#include<bits/stdc++.h>

using namespace std;

int t = 0;
string s;

void output(char x,int t) {
	if(t == 1) {
		if(x == '0') cout << "Zero";
		else if(x == '1') cout << "One";
		else if(x == '2') cout << "Two";
		else if(x == '3') cout << "Three";
		else if(x == '4') cout << "Four";
		else if(x == '5') cout << "Five";
		else if(x == '6') cout << "Six";
		else if(x == '7') cout << "Seven";
		else if(x == '8') cout << "Eight";
		else if(x == '9') cout << "Nine";
	}
	if(t > 1) {
		cout << " ";
		if(x == '0') cout << "zero";
		else if(x == '1') cout << "one";
		else if(x == '2') cout << "two";
		else if(x == '3') cout << "three";
		else if(x == '4') cout << "four";
		else if(x == '5') cout << "five";
		else if(x == '6') cout << "six";
		else if(x == '7') cout << "seven";
		else if(x == '8') cout << "eight";
		else if(x == '9') cout << "nine";
	}
}

int main() {
	char x;
	while(cin >> x) {
		t++;
		output(x,t);
	}
	cout << '.';
}